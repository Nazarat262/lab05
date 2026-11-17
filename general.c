#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


///task30
int task30() {
	int a[100], b[100];
	int i, n, k = 0;
	printf("Input n:\n");
	scanf("%d", &n);
	if (n < 1 || n > 100) {
		printf("n must be from 1 to 100\n");
		return 0;
	}

	printf("Input:numbers\n");
	for (i = 0; i < n; i++)
	scanf("%d", &a[i]);
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[k] = a[i];
			k++;
		}
	}

	if (k == 0) {
		printf("No even numbers\n");

	}
	else {
		for (i = 0;i < k;i++)
			printf("%d", b[i]);
	}
	
	return 0;
}

/// task116
int task116() {
	int a[100];
	int i, n, k, x, y, d;
	printf("Input n:\n");
	scanf("%d", &n);
	if (n < 1 || n > 100) {
		printf("n must be from 1 to 100\n");
		return 0;
	}

	printf("Input:numbers\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Input:k\n");
	scanf("%d", &k);
	if (k < 1 || k > n + 1) {
		printf("wrong k\n");
		return 0;
	}

	printf("Input:x, y\n");
	scanf("%d %d", &x, &y);
	d = x - y;

	for (i = n; i > k - 1; i--)
		a[i] = a[i - 1];
	a[k - 1] = d;
	n++;

	for (i = 0; i < n; i++)
	printf("%d ", a[i]);
	printf("\n");

	return 0;
}


///task123
int task123() {
	int a[100];
	int i, n, k = 0;
	double m, p = 1;
	printf("Input n:\n");
	scanf("%d", &n);
	if (n < 1 || n > 100) {
		printf("n must be from 1 to 100\n");
		return 0;
	}

	printf("Input:numbers\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Input:M\n");
	scanf("%lf", &m);

	for (i = 0; i < n; i++) {
		if (a[i] > m) {
			p *= a[i];
			k++;
		}
	}

	if (k == 0) {
		printf("No numbers greater than M\n");
	}
	else {
		printf("Product = %g\n", p);
	}

	return 0;
}

int task121() {
	int a[100];
	int i, n, k, mx, mn;
	printf("Input n:\n");
	scanf("%d", &n);
	if (n < 3 || n > 100) {
		printf("n must be from 3 to 100\n");
		return 0;
	}

	printf("Input:numbers\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Input:k\n");
	scanf("%d", &k);
	if (k < 1 || 2 * k + 1 > n) {
		printf("wrong k\n");
		return 0;
	}

	mx = a[1];
	for (i = 3; i <= 2 * k - 1; i += 2) {
		if (a[i] > mx)
			mx = a[i];
	}

	mn = a[0];
	for (i = 1; i <= 2 * k; i++) {
		if (a[i] < mn)
			mn = a[i];
	}

	printf("max = %d, min = %d, result = %d\n", mx, mn, mx + mn);

	return 0;
}

///task142
int task142() {
	double a[100], mx, mn, mn2, mx2;
	int n, i;
	printf("Inpunt n:\n");
	scanf("%d", &n);
	if (1 < n || n > 100) {
		printf("wrong\n");
		return 0;
	}
	for (i = 0;i < n;i++) {
		scanf("%lf", &a[i]);
}
	mn = a[0];
	for (i = 1; i < n;i++) {
		if (a[i] < mn)
			mn = a[i];
	}
		
	
	mx = a[0];
	for (i = 1; i < n;i++) {
		if (a[i] > mx)
			mx = a[i];
	}
	
	mn2 = mn * mn;
	mx2 = mx * mx;

	for (i = 0; i < n; i++) {
		if (a[i] >= 0)
			a[i] *= mn2;
		else
			a[i] *= mx2;
	}
	for (i = 0; i < n; i++)
		printf("%g ", a[i]);
	return 0;
}








int main() {
	task30();
	task116();
	task123();
	task121();
	task142();
	return 0;
}
