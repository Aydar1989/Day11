/*
    1 6 7
    2 5 8
    3 4 9
*/
void sort_vertical(int **matrix, int n, int m, int **result_matrix);

/*
    1 2 3
    6 5 4
    7 8 9
*/
void sort_vertical(int **matrix, int n, int m, int **result_matrix);

void input(int **matrix, int *n, int *m);
void output(int **matrix, int n, int m);

void main() {
    int **matrix, **result;
    int n, m;
    matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) matrix[i] = (int *)malloc(10 * sizeof(int));

    input(matrix, n, m);

    sort_vertical(matrix, n, m, result);
    output(result, n, m);

    sort_horizontal(matrix, n, m, result);
    output(result, n, m);
}