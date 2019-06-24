#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include <windows.h>
using namespace std;

class ciriciri{
public:
    void sanguineciri(){
        cout<<"     Sanguine :"<<endl;
        cout<<"      ~ Pribadinya memiliki Kharisma"<<endl;
        cout<<"      ~ Mudah bergaul"<<endl;
        cout<<"      ~ Senang berbicara"<<endl;
        cout<<"      ~ Suka memberi semangat"<<endl;
        cout<<"      ~ Suka menolong"<<endl;
        cout<<"      ~ Punya rasa peduli"<<endl;
        cout<<"      ~ Pandangan selalu optimis"<<endl;
        cout<<endl;
    }
    void cholericciri(){
        cout<<"     Choleric :"<<endl;
        cout<<"      ~ Pembawaannya langsung kepada pokok pembicaraan"<<endl;
        cout<<"      ~ Menyukai hal-hal yang menantang"<<endl;
        cout<<"      ~ Orangnya suka menguasai"<<endl;
        cout<<"      ~ Senang memimpin"<<endl;
        cout<<"      ~ Selalu berfokus pada tujuan dan hasil yang dicapai"<<endl;
        cout<<"      ~ Sifatnya tegas"<<endl;
        cout<<endl;
    }
    void melancholicciri(){
        cout<<"     Melancholic :"<<endl;
        cout<<"      ~ Orang ini memperhatikan ketelitian dan ketepatan"<<endl;
        cout<<"      ~ Bertindak dengan hati-hati"<<endl;
        cout<<"      ~ Bekerja dengan sistematis"<<endl;
        cout<<"      ~ Tidak suka memihak"<<endl;
        cout<<"      ~ Taat kepada atasan"<<endl;
        cout<<endl;
    }
    void plegmaticciri(){
        cout<<"     Plegmatic :"<<endl;
        cout<<"      ~ Tidak menyukai perubahan yang mendadak"<<endl;
        cout<<"      ~ Pembawaanya tenang dan sabar"<<endl;
        cout<<"      ~ Memiliki sifat setia"<<endl;
        cout<<"      ~ Orangnya dapat dipercaya"<<endl;
        cout<<"      ~ Tipe pendengar yang baik"<<endl;
        cout<<endl;
    }

    void gotoxy(int x, int y){
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
};



int main()
{
    string soal[200] = {
    //EU
	"Orang yang suka tantangan, hal-hal baru, hal-hal yang memerlukan keberanian dan tekad untuk menguasainya",
	"Meyakinkan, lebih memakai logika dan fakta daripada memakai daya tarik pribadi atau kuasanya",
	"Berbicara terus terang",
	"Kepribadian yang berwibawa/kuat",
	"Bersedia mengambil resiko atau berani",
	//ES
	"Suka mengkomunikasikan pikiran dan perasaan dengan gerakan fisik",
	"Ceria dan suka bercanda",
	"Meyakinkan diri sendiri dan orang lain bahwa semua akan beres(optimis)",
	"Rasa humor yang tinggi",
	"Menyenangkan sebagian teman atau membuat orang lain senang",
	//IS
	"Mudah menyesuaikan diri dan merasa nyaman dalam setiap situasi",
	"Suasana hati damai dan tidak terpengaruh kejadian di sekitarnya, dan menghindar dari tantangan",
	"Menerima apa saja dan mudah melakukan hal-hal atas saran orang lain",
	"Lebih suka menanggapi dari pada memulai percakapan",
	"Peka dan sabar",
	//IU
	"Suka meneliti atau menganalisis untuk meyakinakan diri akan suatu hal dengan logis",
	"Menyelesaikan pekerjaan sampai tuntas, sebelum memulai hal yang baru",
	"Mengatur atau merencanakan secara metodis dan sistematis",
	"Konsisten, teguh, loyal(setia)",
	"Terperinci, melakukan sesuatu menurut urutan dan kronologis"
	};
	string jawab;
    cobalagi:
	float EI=0, US=0, memberE=0, memberI=0, memberU=0, memberS=0, choleric=0, sanguine=0, melancholic=0, plegmatic=0;
	int i;

    for (i=0; i<20; i++) {
    	system("cls");
    	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|                                 Jawab dengan Sering (S), Kadang2 (K), atau Jarang(J)                           |"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<" "<<i+1<<". "<<soal[i]<<"."<<endl;
		cout<<"    Jawab : (S/K/J)? ";
		cin>>jawab;
    	jawab:

        //filter SKT
		if (jawab!="S" && jawab!="s" && jawab!="Sering" && jawab!="sering" && jawab!="SERING" &&
		    jawab!="K" && jawab!="k" && jawab!="Kadang2" && jawab!="kadang2" && jawab!="KADANG2" &&
			jawab!="J" && jawab!="j" && jawab!="Jarang" && jawab!="jarang" && jawab!="JARANG"){
    		system("cls");
    		cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"|                                 Jawab dengan Sering (S), Kadang2 (K), atau Jarang(J)                           |"<<endl;
            cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    		cout<<"|                                    Inputan Salah, Silahkan Perbaiki Jawaban Anda                               |"<<endl;
            cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<" "<<i+1<<". "<<soal[i]<<"."<<endl;
            cout<<"    Jawab : (S/K/J)? ";
			cin>>jawab;

        	goto jawab;
		}

		//soal EU
		if (i>=0 && i<5){
   		    if (jawab=="S" || jawab=="s" || jawab=="Sering" || jawab=="sering" || jawab=="SERING"){
        		EI=EI+2;
        		US=US+2;
			}
			else if (jawab=="K" || jawab=="k" || jawab=="Kadang2" || jawab=="kadang2" || jawab=="KADANG2"){
				EI=EI+1;
        		US=US+1;
			}
			else {
			}
		}

		//soal ES
		if (i>=5 && i<10){
		    if (jawab=="S" || jawab=="s" || jawab=="Sering" || jawab=="sering" || jawab=="SERING"){
        		EI=EI+2;
			}
			else if (jawab=="K" || jawab=="k" || jawab=="Kadang2" || jawab=="kadang2" || jawab=="KADANG2"){
				EI=EI+1;
        		US=US+1;
			}
			else {
				US=US+2;
			}
		}

		//soal IS
		if (i>=10 && i<15){
		    if (jawab=="S" || jawab=="s" || jawab=="Sering" || jawab=="sering" || jawab=="SERING"){
			}
			else if (jawab=="K" || jawab=="k" || jawab=="Kadang2" || jawab=="kadang2" || jawab=="KADANG2"){
				EI=EI+1;
        		US=US+1;
			}
			else {
				EI=EI+2;
        		US=US+2;
			}
		}

		//soal IU
		if (i>=15 && i<20){
		    if (jawab=="S" || jawab=="s" || jawab=="Sering" || jawab=="sering" || jawab=="SERING"){
        		US=US+2;
			}
			else if (jawab=="K" || jawab=="k" || jawab=="Kadang2" || jawab=="kadang2" || jawab=="KADANG2"){
				EI=EI+1;
        		US=US+1;
			}
			else {
				EI=EI+2;
			}
		}
	}
	system("cls");
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Hasil Nilai Kuisioner                                                                                         |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"      Ekstrovert = "<<EI<<"\n      Introvert  = "<<40-EI<<"\n      Unstable   = "<<US<<"\n      Stable     = "<<40-US<<"\n";

    //Keanggotaan
	if (EI>=26){
		memberE=1;
	}
	else if (EI<14){
		memberE=0;
	}
	else{
		memberE=(EI-14)/12;
	}

	if (EI<=14){
        memberI=1;
	}
	else if (EI>26){
        memberI=0;
	}
	else{
        memberI=(26-EI)/12;
	}

    if (US>=26){
		memberU=1;
	}
	else if (US<14){
		memberU=0;
	}
	else{
		memberU=(US-14)/12;
	}

	if (US<=14){
        memberS=1;
	}
	else if (US>26){
        memberS=0;
	}
	else{
        memberS=(26-US)/12;
	}

    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Nilai Keanggotaan                                                                                             |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"   Nilai keanggotaan Ke-ekstrovert-an"<<endl;
    cout<<"      Ekstrovert = "<<memberE<<endl;
    cout<<"      Introvert  = "<<memberI<<endl;
    cout<<"   Nilai keanggotaan Ke-unstable-an"<<endl;
    cout<<"      Unstable   = "<<memberU<<endl;
    cout<<"      Stable     = "<<memberS<<endl;

    //Inferensi
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Rules yang Dipakai                                                                                            |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    if(memberE != 0 && memberU != 0){
        if (memberE>memberU){
            choleric=memberU;
        }
        else{
            choleric=memberE;
        }
        cout<<"      Rules 1 --> Choleric = "<<choleric<<"\n\n";
    }

    if(memberE != 0 && memberS != 0){
        if (memberE>memberS){
            sanguine=memberS;
        }
        else{
            sanguine=memberE;
        }
        cout<<"      Rules 2 --> Sanguine = "<<sanguine<<"\n\n";
    }

   if(memberI != 0 && memberU != 0){
        if (memberI>memberU){
            melancholic=memberU;
        }
        else{
            melancholic=memberI;
        }
        cout<<"      Rules 3 --> Melancholic = "<<melancholic<<"\n\n";
    }

   if(memberI != 0 && memberS != 0){
        if (memberI>memberS){
            plegmatic=memberS;
        }
        else{
            plegmatic=memberI;
        }
        cout<<"      Rules 4 --> Plegmatic = "<<plegmatic<<"\n\n";
    }

    float total;
    total=choleric+sanguine+melancholic+plegmatic;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Sifat anda adalah                                                                                             |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
        choleric = (choleric/total)*100;
        printf("      Choleric    = %f persen\n", choleric);
        sanguine = (sanguine/total)*100;
        printf("      Sanguine    = %f persen\n", sanguine);
        melancholic = (melancholic/total)*100;
        printf("      Melancholic = %f persen\n", melancholic);
        plegmatic = (plegmatic/total)*100;
        printf("      Plegmatic   = %f persen\n", plegmatic);

    float besar[100], maxi;
    besar[0]=choleric;
    besar[1]=sanguine;
    besar[2]=melancholic;
    besar[3]=plegmatic;
    maxi=0;

    for(i=0; i<4; i++){
        if(besar[i]>maxi){
            maxi=besar[i];
        }
    }

    cout<<endl;
    ciriciri chara;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Ciri anda adalah                                                                                              |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    if(plegmatic==sanguine && sanguine==melancholic && melancholic==choleric){
        cout<<"   Anda tidak memiliki sifat dominan, Anda orang Unik!"<<endl;
        chara.sanguineciri();
        chara.melancholicciri();
        chara.plegmaticciri();
        chara.cholericciri();
    }
    else if(maxi==choleric && maxi==sanguine){
        cout<<"   Sifat anda lebih dominan Choleric dan Sanguine"<<endl;
        chara.cholericciri();
        chara.sanguineciri();
    }
    else if(maxi==choleric && maxi==melancholic){
        cout<<"   Sifat anda lebih dominan Choleric dan Melancholic"<<endl;
        chara.cholericciri();
        chara.melancholicciri();
    }
    else if(maxi==choleric && maxi==plegmatic){
        cout<<"   Sifat anda lebih dominan Choleric dan Plegmatic"<<endl;
        chara.cholericciri();
        chara.plegmaticciri();
    }
    else if(maxi==melancholic && maxi==plegmatic){
        cout<<"   Sifat anda lebih dominan Melancholic dan Plegmatic"<<endl;
        chara.melancholicciri();
        chara.plegmaticciri();
    }
    else if(maxi==melancholic && maxi==sanguine){
        cout<<"   Sifat anda lebih dominan Melancholic dan Sanguine"<<endl;
        chara.melancholicciri();
        chara.sanguineciri();
    }
    else if(maxi==plegmatic && maxi==sanguine){
        cout<<"   Sifat anda lebih dominan Sanguine dan Plegmatic"<<endl;
        chara.sanguineciri();
        chara.plegmaticciri();
    }
    else if(maxi==choleric){
        cout<<"   Sifat anda lebih dominan Choleric"<<endl;
        chara.cholericciri();
    }
    else if(maxi==sanguine){
        cout<<"   Sifat anda lebih dominan Sanguine"<<endl;
        chara.sanguineciri();
    }
    else if(maxi==melancholic){
        cout<<"   Sifat anda lebih dominan Melancholic"<<endl;
        chara.melancholicciri();
    }
    else if(maxi==plegmatic){
        cout<<"   Sifat anda lebih dominan Melancholic"<<endl;
        chara.plegmaticciri();
    }
    cout<<endl;
    system("pause");
    system("cls");
    string cl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|  Apakah anda ingin coba lagi ? ";
    chara.gotoxy(113,1); cout<<"|"<<endl;
    chara.gotoxy(0,2); cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    chara.gotoxy(33,1); cin>>cl;

    if(cl=="ya"||cl=="y"||cl=="Ya"||cl=="YA"||cl=="Y"){
        goto cobalagi;
    }
    system("pause");
}
