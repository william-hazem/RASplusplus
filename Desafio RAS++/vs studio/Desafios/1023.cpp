//#include <iostream>
//using std::cout;
//using std::cin;
//#include <map>
//using std::multimap;
//#include <iomanip>
//#include <algorithm>
//int main()
//{
//	int n, ncidade(0), psoma, csoma;
//	short npessoa, cpessoa;
//	multimap<short, short> imovel;
//	multimap<short, short>::iterator it, it2;
//	cout << std::fixed << std::setprecision(2);
//	while (true)
//	{
//		cin >> n;
//		if (n == 0) break;
//		psoma = 0;
//		csoma = 0;
//		ncidade++;
//		while (n != 0)
//		{
//			std::cin >> npessoa >> cpessoa;
//			//custo por pessoa , numero de pessoas
//			imovel.insert({ cpessoa / npessoa, npessoa });
//			psoma = psoma + npessoa;
//			csoma = csoma + cpessoa;
//			n--;
//		}
//		it = imovel.begin();
//		
//		while (it != imovel.end())
//		{
//			it2 = it;
//			it2++;
//			if (it2 == imovel.end()) break;
//			if (it->first == it2->first)
//			{
//				it->second += it2->second;
//				imovel.erase(it2);
//			}
//			it++;
//		}
//		cout << "Cidade# " << ncidade << ":\n";
//		n = imovel.size();
//		for (auto& i : imovel)
//		{
//			cout << i.second << '-' << i.first << ' ';
//		}
//		cout << '\n' << "Consumo medio: " << double(csoma) / psoma << " m3.\n\n";
//		imovel.clear();
//	}
//	return 0;
//}