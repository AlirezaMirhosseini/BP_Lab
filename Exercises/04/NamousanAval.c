#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int z, n, x = 1, i, j, t, b, cout, ands;
	scanf("%d", &z);
	for (i = 1;i <= z;i++) {
		scanf("%d", &n);
		// scan again
		b = 1;
		cout = 0;
		ands = 0;
		//for int 
		while (cout != n) {
			//too halgheh
			b++;
			j = 0;
		    t = 2;

			while (t < b) {
				if (b % t == 0)j++;
				t++;
			}
			//hala shati
			if (j == 0) {
				int num = 0, q = 2;
				ands++;
				while (q < ands) {
					if (ands % q == 0)num++;
					q++;
				}
				//oon halat
				if (num == 0 && b != 2)cout++;
			}

		}
		printf("%d\n", b);
	}//easy easy tamam tamam
	
	return 0;
}