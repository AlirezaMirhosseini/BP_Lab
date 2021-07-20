#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int jam, far, mah, noo, jm, fm, mm, nm, j = 0, f = 0, m = 0, n = 0;
	scanf("%d %d %d %d", &jam, &far, &mah, &noo);
	while (1)
	{
		if (jam > 0) {
			jm = jam - 1;
			j++;
			jam = far;
			far = mah;
			mah = noo;
			noo = jm;
		}
		if (jam == 0 || far == 0 || mah == 0 || noo == 0) { break; }

		if (far > 0) {
			fm = far - 1;
			f++;
			far = mah;
			mah = noo;
			noo = jam;
			jam = fm;
		}
		if (jam == 0 || far == 0 || mah == 0 || noo == 0) { break; }

		if (mah > 0) {
			mm = mah - 1;
			m++;
			mah = noo;
			noo = jam;
			jam = far;
			far = mm;
		}
		if (jam == 0 || far == 0 || mah == 0 || noo == 0) { break; }

		if (noo > 0) {
			nm = noo - 1;
			n++;
			noo = jam;
			jam = far;
			far = mah;
			mah = nm;
		}
		if (jam == 0 || far == 0 || mah == 0 || noo == 0) { break; }
	}
	printf("%d %d %d %d", j, f, m, n);
}