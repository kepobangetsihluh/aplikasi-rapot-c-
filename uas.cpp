//////////////////////////////////////////////////////////////////////////////////
// Copyright Disclaimer under section											//
// 107 of the Copyright Act of 1976			///////////////////////////////////	//
// allowance is made for fair use for		// NAMA : MUHAMMMAD FIKRI ARZYAH //	//
// purposes such as criticism,comment,		// NIM	: 201011401805			 //	//
// news reporting,teaching,scholarship,		// KELAS: 01TPLP010				 //	//
// education and research. Fair use			///////////////////////////////////	//
// is a use permitted by copyright statute										//
// that might otherwise be infringing. [MADE WITH <3 ARZY] FXCODE				//
//////////////////////////////////////////////////////////////////////////////////

#include "iostream"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "iomanip"

using namespace std;
int main(){

	int jmlhdr[1000],tugas[1000],uts[1000],uas[1000],nilai1[1000],nim;
	char grade[10];
	char nama[1000][30];

	cout<<"//////////////////////////////////////////////////////////\n";
	cout<<"//	Kalkulator Rapot By MUHAMMAD FIKRI ARZYAH	//\n";
	cout<<"//////////////////////////////////////////////////////////\n";
	
	cout<<""<<endl;
	cout<<"masukan jumlah mahasiswa *maksimal 10 : "; cin>>nim;
			if (nim>10){		
				cout<<endl<<"Maksimal input 10 !!!";		
			return 0;
		}
			if (nim<0){		
				cout<<endl<<"Input bilangan 1-10 !!!";		
			return 0;
		}
			if (nim<=10){
				for (int i=0;i<nim;i++){
				 	cout<<endl<<"Data ke- "<<i+1<<endl;			 	
					cout<<"Masukan Nama : " ;
					scanf(" %[^\n]s",nama[i]);
					cout<<"Masukan Jumlah Hadir : "; cin>>jmlhdr[i];
					if (jmlhdr[i]>14){
						cout<<"Pertemuan cuma sampai 14 pertemuan, gausah ngadi2 deh";
					return 0;
					}
					cout<<"Masukan Nilai Tugas : "; cin>>tugas[i];
					if (tugas[i]>100){
						cout<<"nilai cuma sampai 100, gausah ngadi2 deh";
					return 0;
					}
					cout<<"Masukan Nilai UTS : "; cin>>uts[i];
					if (uts[i]>100){
						cout<<"nilai cuma sampai 100, gausah ngadi2 deh";
					return 0;
					}
					cout<<"Masukan Nilai UAS : "; cin>>uas[i];
				 	if (uas[i]>100){
						cout<<"nilai cuma sampai 100, gausah ngadi2 deh";
					return 0;
					} 	
				 	
		 	int bobot_hdr[100],bobot_tugas[1000],bobot_uts[1000],bobot_uas[1000];
			
			bobot_hdr[i] = (jmlhdr[i] * 10)/100;
			bobot_tugas[i] = (tugas[i] * 20)/100;
			bobot_uts[i] = (uts[i] * 30)/100;
			bobot_uas[i] = (uas[i] * 40)/100;
			nilai1[i]= bobot_hdr[i]+bobot_tugas[i]+bobot_uts[i]+bobot_uas[i];
		
				if(nilai1[i]>80){
				grade[i] = 'A';
			}
				if( 70<= nilai1[i] && nilai1[i] <79){		
				grade[i] = 'B';
			}			
				if( 60<= nilai1[i] && nilai1[i] <70){	
				grade[i] = 'C';
			}
				if( 50<= nilai1[i] && nilai1[i] <60){	
				grade[i] = 'D';
			}
				if(nilai1[i] <50){		
				grade[i] = 'E';
			}
				if(jmlhdr[i] == 0 || tugas[i] == 0 || uts[i] == 0 || uas[i] == 0){		
				grade[i] = 'E';
			}
		}
	}
		system("CLS");
	
		cout<<"Nama Mata Kuliah	: ALGORITHMA DAN PEMROGRAMAN I"<<endl;
		cout<<"SKS			: 2"<<endl;
		cout<<"====================================================================================================================\n";
		cout<<"|   NIM   |           NAMA           |   JML HADIR   |   TUGAS   |   UTS   |   UAS   |   NILAI ANGKA   |   GRADE   |\n";
		cout<<"====================================================================================================================\n";


		for(int i=0;i<nim;i++){
			while(nim>0) {
				cout<<"     "<<setiosflags(ios::left)<<setw(5)<<nim<<" "; 
				cout<<" "<<setiosflags(ios::left)<<setw(25)<<nama[i]<<" "; 
				cout<<"	     "<<setiosflags(ios::left)<<setw(5)<<jmlhdr[i]<<" "; 
				cout<<"	  "<<setiosflags(ios::left)<<setw(5)<<tugas[i]<<"   "; 
				cout<<"   "<<setiosflags(ios::left)<<setw(5)<<uts[i]<<" "; 
				cout<<"    "<<setiosflags(ios::left)<<setw(5)<<uas[i]<<" "; 
				cout<<"         "<<setiosflags(ios::left)<<setw(5)<<nilai1[i]<<" "; 
				cout<<"         "<<setiosflags(ios::left)<<setw(5)<<grade[i]<<endl; 
			nim--;
			i++;
		}
	}	
	system("PAUSE");
	cout<<endl<<endl;
	cout<<"//////////////////////////////////////////////////////////////////\n";
	cout<<"//	This Script Made With <3 by MUHAMMAD FIKRI ARZYAH	//\n";
	cout<<"//////////////////////////////////////////////////////////////////\n";	
	
	system("PAUSE");
	system("CLS");
	cout<<"THANK YOU :)";

	return 0;	
}
