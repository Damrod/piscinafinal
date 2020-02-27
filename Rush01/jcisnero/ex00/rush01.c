#include <stdio.h>
#include <unistd.h>
 #include <stdlib.h>

struct map_t {
	int values[4][4];
	struct map_t *next;
};

struct conditions_t {
	int values[16];
};

struct solutions_t {
	struct map_t *first;
	struct map_t *last;
};

struct possibilities_t {
	unsigned int count;
	unsigned int values[11][4];
};

struct possibilities_t possibilities[] = {
	// Possibilities for one.
	{.count = 6, .values = {
			{4, 1, 2, 3},
			{4, 1, 3, 2},
			{4, 2, 1, 3},
			{4, 2, 3, 1},
			{4, 3, 1, 2},
			{4, 3, 2, 1}
		}
	},
	// Possibilities for two.
	{.count = 11, .values = {
			{1, 4, 2, 3},
			{1, 4, 3, 2},
			{2, 1, 4, 3},
			{2, 4, 1, 3},
			{2, 4, 3, 1},
			{3, 1, 2, 4},
			{3, 1, 4, 2},
			{3, 2, 1, 4},
            {3, 2, 4, 1},
			{3, 4, 1, 2},
			{3, 4, 2, 1}
		}
	},
	// Possibilities for three.
	{.count = 6, .values = {
			{1, 2, 4, 3},
			{1, 3, 2, 4},
			{1, 3, 4, 2},
			{2, 1, 3, 4},
			{2, 3, 1, 4},
			{2, 3, 4, 1},
		}
	},
	// Possibilities for four.
	{.count = 1, .values = {
			{1, 2, 3, 4},
		}
	}
};

const char *get_string(unsigned int value)
{
	if (value == 0)
		return "0";
	else if (value == 1)
		return "1";
	else if (value == 2)
		return "2";
	else if (value == 3)
		return "3";
	else if (value == 4)
		return "4";
	else
		return "U";
}

void map_get_section(struct map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 8) { // Reading a column.
		if (round < 4) { // Top to bottom.
			values[0] = (*map).values[0][round];
			values[1] = (*map).values[1][round];
			values[2] = (*map).values[2][round];
			values[3] = (*map).values[3][round];
		} else { // Bottom to top.
			values[0] = (*map).values[3][round - 4];
			values[1] = (*map).values[2][round - 4];
			values[2] = (*map).values[1][round - 4];
			values[3] = (*map).values[0][round - 4];
		}
	} else { // Reading a row.
		if (round < 12) { // Left to right.
			values[0] = (*map).values[round - 8][0];
			values[1] = (*map).values[round - 8][1];
			values[2] = (*map).values[round - 8][2];
			values[3] = (*map).values[round - 8][3];
		} else { // Right to left.
			values[0] = (*map).values[round - 12][3];
			values[1] = (*map).values[round - 12][2];
			values[2] = (*map).values[round - 12][1];
			values[3] = (*map).values[round - 12][0];
		}
	}
}

void map_update_section(struct map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 8) { // Reading a column.
		if (round < 4) { // Top to bottom.
			(*map).values[0][round] = values[0];
			(*map).values[1][round] = values[1];
			(*map).values[2][round] = values[2];
			(*map).values[3][round] = values[3];
		} else { // Bottom to top.
			(*map).values[3][round - 4] = values[0];
			(*map).values[2][round - 4] = values[1];
			(*map).values[1][round - 4] = values[2];
			(*map).values[0][round - 4] = values[3];
		}
	} else { // Reading a row.
		if (round < 12) { // Left to right.
			(*map).values[round - 8][0] = values[0];
			(*map).values[round - 8][1] = values[1];
			(*map).values[round - 8][2] = values[2];
			(*map).values[round - 8][3] = values[3];
		} else { // Right to left.
			(*map).values[round - 12][3] = values[0];
			(*map).values[round - 12][2] = values[1];
			(*map).values[round - 12][1] = values[2];
			(*map).values[round - 12][0] = values[3];
		}
	}
}

void map_init(struct map_t *map)
{
	int r;
	int c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while(c < 4)
		{
			(*map).values[r][c] = 0;
		c++;
		}
	r++;
	}
	(*map).next = NULL;
}

struct map_t *map_clone(struct map_t *src)
{
	int r;
	int c;
	struct map_t *new_map;

	new_map = malloc(sizeof(struct map_t));
	r = 0;
	while(r < 4)
	{
		c = 0;
		while(c < 4)
		{
			(*new_map).values[r][c] = src->values[r][c];
			c++;
		}
		r++;
	}
	(*new_map).next = NULL;
	return new_map;
}

void map_show(struct map_t *map)
{
	int r;
	int c;

	r = 0;
	while(r < 4)
	{
		c = 0;
		while(c < 4)
		{
			write(1, get_string((*map).values[r][c]), 1);
			if (c < 3)
				write (1, " ", 1);
			else write (1, "\n", 1);
			c++;
		}
		r++;
	}
}

void solutions_init(struct solutions_t *solutions)
{
	(*solutions).first = NULL;
	(*solutions).last = NULL;
}

void solutions_append(struct solutions_t *solutions, struct map_t *map)
{
	if (NULL == (*solutions).first)
		(*solutions).first = map;
	if (NULL == (*solutions).last) {
		(*solutions).last = map;
	} else {
		(*solutions).last->next = map;
		(*solutions).last = map;
	}
}

void evaluate_possibility(unsigned int round, unsigned int *possibility,
			  struct map_t *candidate, struct solutions_t *solutions)
{
	int i;
	unsigned int section[4];
	struct map_t *new_candidate;
	map_get_section(candidate, round, section);

	i = 0;
	while(i < 4)
	{
		if ((0 != section[i]) && (section[i] != possibility[i]))
			return; // Candidate does not accept the possibility.
		i++;
	}

	new_candidate = map_clone(candidate);
	map_update_section(new_candidate, round, possibility);
	solutions_append(solutions, new_candidate);
}

void evaluate_candidate(unsigned int round, unsigned int value, struct map_t *candidate, struct solutions_t *solutions)

{
	unsigned int p;

	p = 0;
	while(p < possibilities[value - 1].count)
	{
		evaluate_possibility(round, possibilities[value - 1].values[p],
				     candidate, solutions);
		p++;
	}
}

void solve_round(unsigned int round, unsigned int value,
		 struct solutions_t *candidates, struct solutions_t *solutions)
{
	// Use next_candidate to store the next pointer, as the node is freed
	// before the access.
	struct map_t *candidate, *next_candidate;

	// Go over all the candidates, creating new viable candidates
	// after applying the round value.
	for (candidate = candidates->first;
	     candidate != NULL && ((next_candidate = candidate->next) || 1);
	     candidate = next_candidate) {
		evaluate_candidate(round, value, candidate, solutions);
		free(candidate);
	}
}

struct map_t *solve(struct conditions_t *conds)
{
	struct solutions_t candidates, solutions;
	struct map_t *initial_map = malloc(sizeof(struct map_t));
	map_init(initial_map);

	solutions_init(&candidates);
	solutions_append(&candidates, initial_map);

	for (unsigned int r = 0; r < 16; r++) {
		solutions_init(&solutions);
		solve_round(r, conds->values[r], &candidates, &solutions);

		if (solutions.first == NULL)
			return NULL; // No viable candidates, exit.

		candidates = solutions; // Go over the candidates again.
	}

	return solutions.first; // Return the first viable solution.
}

void parse_conditions(char *cmdline, struct conditions_t *conds)
{
	sscanf(cmdline, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
	       &(*conds).values[0], &(*conds).values[1], &(*conds).values[2],
	       &(*conds).values[3], &(*conds).values[4], &(*conds).values[5],
	       &(*conds).values[6], &(*conds).values[7], &(*conds).values[8],
	       &(*conds).values[9], &(*conds).values[10], &(*conds).values[11],
	       &(*conds).values[12], &(*conds).values[13], &(*conds).values[14],
	       &(*conds).values[15]);
}

int main(int argc, char *argv[])
{
	(void) argc;
	
	struct conditions_t conds;
	parse_conditions(argv[1], &conds);

	struct map_t *solution = solve(&conds);

	if (solution == NULL || argc != 2) {
		write(1, "Error\n", 6); // strlen()....
		return 1;
	}

	map_show(solution);
	return 0;
}
