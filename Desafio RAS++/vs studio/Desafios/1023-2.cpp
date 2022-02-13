//#include <iostream>
//#include <vector>
//#include <iomanip>
//
//struct dado { short np, cp; };
//
//typedef std::vector<dado> vector;
//
//void quicksort(vector&, int, int);
//
//int main()
//{
//	int n, ncidade(0), psoma, csoma;
//	short npessoa, cpessoa;
//	vector imovel;
//	vector::iterator it, it2;
//	
//	std::cout << std::fixed << std::setprecision(2);
//	while (true)
//	{
//		std::cin >> n;
//		if (n == 0) break;
//		psoma = 0;
//		csoma = 0;
//		ncidade++;
//		while (n != 0)
//		{
//			std::cin >> npessoa >> cpessoa;
//			//custo por pessoa , numero de pessoas
//			imovel.push_back({npessoa, cpessoa / npessoa });
//			psoma = psoma + npessoa;
//			csoma = csoma + cpessoa;
//			n--;
//		}	// !Loop de leitura
//		quicksort(imovel, 0, imovel.size());
//
//		it = imovel.begin();
//
//		while (it != imovel.end())
//		{
//			it2 = it;
//			it2++;
//			if (it2 == imovel.end()) break;
//			if (it->cp == it2->cp)
//			{
//				it->np += it2->np;
//				imovel.erase(it2);
//			}
//			it++;
//		}
//
//		std::cout << "Cidade# " << ncidade << ":\n";
//		n = imovel.size();
//		for (auto& i : imovel)
//		{
//			std::cout << i.np << '-' << i.cp << ' ';
//		}
//		std::cout << "\nConsumo medio: " << double(csoma) / psoma << " m3.\n\n";
//		imovel.clear();
//	}
//}
//
//
//void quicksort(vector& v,  int b, int e)
//{
//	int i = b, j = e-1;
//	dado& pivo = v[(b + e) / 2]; 
//	dado aux;
//	
//	while (i <= j)
//	{
//		while (v.at(i).cp < pivo.cp && i < e)
//		{
//			i++;
//		}
//		while (v.at(j).cp > pivo.cp && j > b)
//		{
//			j--;
//		}
//		if (i <= j)
//		{
//			aux = v[i];
//			v[i] = v[j];
//			v[j] = aux;
//			i++;
//			j--;
//		}
//	}
//	if (j > b)
//		quicksort(v, b, j + 1);
//	if (i < e)
//		quicksort(v, i, e);
//}