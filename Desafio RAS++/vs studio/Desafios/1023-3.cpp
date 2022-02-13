#include <iostream>
#include <iomanip>

typedef struct dado
{
	short np, cp;
}dado;

void quicksort(dado[], int, int);

int main()
{
	dado* ptr1,* ptr2,* ptrf,* imovel;
	int n, ci, ncidade(1);
	int somanp, somacp;
	short tnp, tct;	//numero temporario de pessoa, custo temporario total
	
	std::cin >> n;
	while (n != 0)
	{
		imovel = new dado[n];
		somanp = 0;
		somacp = 0;
		for(ci = 0; ci < n; ci++)
		{
			std::cin >> tnp >> tct;
			imovel[ci].np = tnp;
			imovel[ci].cp = tct / tnp;
			somacp += tct;
			somanp += tnp;

		}
		quicksort(imovel, 0, n);
		ptr1 = imovel;
		ptrf = (imovel + n);
		
		while (ptr1 != ptrf)
		{
			ptr2 = ptr1 + 1;
			if (ptr2 != ptrf && ptr1->cp == ptr2->cp)
			{
				ptr1->np += ptr2->np;
				while (ptr2 != ptrf)
				{
					*ptr2 = *(ptr2 + 1);
					ptr2++;
				}
				n = n - 1;
				ptrf--;
			}
			else ptr1++;
		}

		std::cout << "Cidade# " << ncidade << ":\n";
		for (ci = 0; ci < n; ci++)
		{
			std::cout << imovel[ci].np << "-" << imovel[ci].cp << " ";
		}
		std::cout << "\nConsumo medio: " << somacp / float(somanp) << " m3.\n\n";
		std::cin >> n;

		ncidade++;
		delete  imovel;
	}
	
	return 0;
}

void quicksort(dado v[], int b, int e)
{
	int i = b, j = e - 1;
	short pivo = v[(b + e) / 2].cp;
	dado aux;

	while (i <= j)
	{
		while (v[i].cp < pivo && i < e)
		{
			i++;
		}
		while (v[j].cp > pivo && j > b)
		{
			j--;
		}
		if (i <= j)
		{
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	if (j > b)
		quicksort(v, b, j + 1);
	if (i < e)
		quicksort(v, i, e);
}