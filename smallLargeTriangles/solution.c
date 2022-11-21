#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle tr) {
    double p = (tr.a + tr.b + tr.c) / 2.0;
    double area = sqrt(p *(p - (double)tr.a) * (p - (double)tr.b) * (p - (double)tr.c));
    
    return area;
}

void sort_by_area(triangle* tr, int n) {
	for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++ j){
            if (area(tr[j]) > (area(tr[j+1]))) {
            triangle temp = tr[j];
            tr[j] = tr[j+1];
            tr[j+1] = temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
