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

		} while (satirSayisi < 5 || satirSayisi > 15);                    // Atanacak deðerin 5 ile 15 arasýnda olmasýný saðlar.


		do
		{
			cout << "sutun sayisi giriniz.....";
			cin >> sutunSayisi;
			if (sutunSayisi < 5 || sutunSayisi>40) {
				cout << "sutun sayisini 5 ile 40 arasinda seciniz." << endl;
			}

		} while (sutunSayisi < 5 || sutunSayisi > 40);                         // Atanacak deðerin 5 ile 40 arasýnda olmasýný saðlar.

		if (satirSayisi * 2 != sutunSayisi)
			cout << "sutun sayisi satir sayisinin 2 kati olmalidir.." << endl;

	} while (satirSayisi * 2 != sutunSayisi);                                 // Sütun sayýsýnýn satýr sayýsýnýn iki katý olmasýný saðlar.

	for (int x = 0; x <= 1; x++)
	{
		if (x == 0)                                                          // Orta noktalara yýldýz atanmasýný saðlar.
		{
			sekil1 = (sutunSayisi / 2) - 1;
			sekil2 = (sutunSayisi / 2);
		}
		else if (x != 0)
		{
			sekil2 = 0;
			sekil1 = sutunSayisi - 1;
		}

		for (int y = 0; y < satirSayisi; y++)                            //Karenin satýrýný belirler.
		{
			for (int z = 0; z < sutunSayisi; z++)                       //Karenin sütununu belirler.
			{
				if (y == 0 || y == satirSayisi - 1 || z == 0 || z == sutunSayisi - 1)  // Yýldýz satýr baþý veya satýr sonuysa tekrar yýldýz eklemesini saðlar.
					cout << "*";
				else if (z == sekil1 || z == sekil2)                                //Yýldýz bulunan bir satýrsa tekrar yýldýz eklenmesini saðlar.
					cout << "*";
				else                                                                // Ýki þartýda saðlamýyorsa boþluk býrakýýr.
					cout << " ";
			}
			sekil1--;                                                             //Yýldýzlarýn birbirinden uzaklaþtýrýlmasýný saðlar.
			sekil2++;                                                             //Yýldýzlarýn yakýnlaþtýrýlmasýný saðlar.                                  
			cout << endl;
			Sleep(100);


		}
		cout << endl;
	}

}


