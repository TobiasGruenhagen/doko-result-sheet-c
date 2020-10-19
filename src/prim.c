#include<stdio.h>

int main() {
    for (int primKandidat = 1; primKandidat < 10000; primKandidat++) {
        int testZahl = primKandidat;
        int prim = 1;

        while (prim && testZahl > 2) {
            testZahl--;
            int testErgebnis = primKandidat / testZahl;
            if (testErgebnis * testZahl == primKandidat) {
                prim = 0;
            }
        }

        if (prim) {
            printf("%d ist prim\n", primKandidat);
        }
    }

	return 0;
}
