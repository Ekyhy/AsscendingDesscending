#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
using namespace std;

int main(){
    vector<string>alphabet;//kontainer alphabet
    string input;

    cout<<"Masukkan kalimat(Ketik 'stop' untuk berhenti)"<<endl;
    while (true)//perulangan 
    {
        cin >> input;
        if (input == "stop")//jika perulangan bernilai benar (stop);
        break;
        alphabet.push_back(input);//mengembalikan string (stop) kedalam kontainer alpabhet;
    }
    
    //Sorting Asscending
    //alphabet.begin -> nilai awal;
    //alphabet.end -> nilai akhir;
    sort(alphabet.begin(),alphabet.end());
    cout << "\n === Asscending ===" << endl;
    for (const auto &s : alphabet)//digunakan untuk mengakses element dari kontainer
    {
        cout << s << endl;
    }
    

    //Sorting Descending
    //Sort begin -> end digunakan untuk menentukan rentang elemen yang akan diurutkan dalam sebuah container;
    sort(alphabet.begin(),alphabet.end(),greater<string>()); //std::sort gabungan dari QuickSort,InsertionSort,HeapSort;
    cout << "\n === Desscending ===" << endl;
    for (const auto &s : alphabet) //digunakan untuk mengakses elemen dari kontainer(alphabet);
    {
        cout << s << endl;
    }
    
    
return 0;
}