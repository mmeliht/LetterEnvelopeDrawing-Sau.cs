#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int satirSayisi, sutunSayisi;
	int sekil1, sekil2;

	do
	{
		do
		{
			cout << "satir sayisi giriniz....";
			cin >> satirSayisi;
			if (satirSayisi < 5 || satirSayisi > 15) {
				cout << "satir sayisini 5 ile 15 arasinda seciniz." << endl;
			}

		} while (satirSayisi < 5 || satirSayisi > 15);                    // Atanacak de�erin 5 ile 15 aras�nda olmas�n� sa�lar.


		do
		{
			cout << "sutun sayisi giriniz.....";
			cin >> sutunSayisi;
			if (sutunSayisi < 5 || sutunSayisi>40) {
				cout << "sutun sayisini 5 ile 40 arasinda seciniz." << endl;
			}

		} while (sutunSayisi < 5 || sutunSayisi > 40);                         // Atanacak de�erin 5 ile 40 aras�nda olmas�n� sa�lar.

		if (satirSayisi * 2 != sutunSayisi)
			cout << "sutun sayisi satir sayisinin 2 kati olmalidir.." << endl;

	} while (satirSayisi * 2 != sutunSayisi);                                 // S�tun say�s�n�n sat�r say�s�n�n iki kat� olmas�n� sa�lar.

	for (int x = 0; x <= 1; x++)
	{
		if (x == 0)                                                          // Orta noktalara y�ld�z atanmas�n� sa�lar.
		{
			sekil1 = (sutunSayisi / 2) - 1;
			sekil2 = (sutunSayisi / 2);
		}
		else if (x != 0)
		{
			sekil2 = 0;
			sekil1 = sutunSayisi - 1;
		}

		for (int y = 0; y < satirSayisi; y++)                            //Karenin sat�r�n� belirler.
		{
			for (int z = 0; z < sutunSayisi; z++)                       //Karenin s�tununu belirler.
			{
				if (y == 0 || y == satirSayisi - 1 || z == 0 || z == sutunSayisi - 1)  // Y�ld�z sat�r ba�� veya sat�r sonuysa tekrar y�ld�z eklemesini sa�lar.
					cout << "*";
				else if (z == sekil1 || z == sekil2)                                //Y�ld�z bulunan bir sat�rsa tekrar y�ld�z eklenmesini sa�lar.
					cout << "*";
				else                                                                // �ki �art�da sa�lam�yorsa bo�luk b�rak��r.
					cout << " ";
			}
			sekil1--;                                                             //Y�ld�zlar�n birbirinden uzakla�t�r�lmas�n� sa�lar.
			sekil2++;                                                             //Y�ld�zlar�n yak�nla�t�r�lmas�n� sa�lar.                                  
			cout << endl;
			Sleep(100);


		}
		cout << endl;
	}

}


