#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	float inputKesadaranDiri=0, inputMengelolaEmosi=0, inputEmpati=0;
	int i=0, j=0, k=0, a=0;
	float KesadaranDiriRendah=0;
	float KesadaranDiriSedang=0;
	float KesadaranDiriTinggi=0;
	float MengelolaEmosiRendah=0;
	float MengelolaEmosiSedang=0;
	float MengelolaEmosiTinggi=0;
	float EmpatiRendah=0;
	float EmpatiSedang=0;
	float EmpatiTinggi=0;
	float EQRendah[20], EQRendahAkhir;
	float EQSedang[20], EQSedangAkhir;
	float EQTinggi[20], EQTinggiAkhir;


	string soal[300]={
		//Mengelola Emosi
		/*1*/"Saya sulit bekerjasama dengan para mahasiswa atau dosen atau teman sebaya yang tidak saya sukai.",
		/*2*/"Jika saya marah pada mahasiwa yang menyinggung perasaan saya biasanya saya berusaha mengendalikan rasa marah itu terlebih dahulu.",
		/*3*/"Walaupun sedang marah, saya berusaha untuk tetap menguasai diri.",
		/*4*/"Saya berusaha menghindari perkelahian dengan sesama rekan saya walaupun saya sedang marah padanya.",
		/*5*/"Saya tidak pernah membuat kesalahan yang sama kedua kalinya dalam melaksanakan tugas.",
		/*6*/"Saya berusaha untuk lebih menghibur teman yang sedang mengalami kesedihan.",
		/*7*/"Saya merasa senang dengan hasil kerja yang sesuai dengan rencana saya.",
		/*8*/"Saya merasa senang karena teman-teman selalu melibatkan saya dalam pembicaraan mereka.",
		/*9*/"Pikiran saya tidak mudah teralihkan dengan adanyaorang di sekeliling saya.",
		/*10*/"Kegagalan yang saya alami tidak membuat saya putus asa tapi membangkitkan keinginan untuk lebih baik lagi.",
		//Kesadaran Diri
		/*1*/"Dapat membuat skala prioritas yang harus dilakukan.",
		/*2*/"Mempunyai prioritas yang harus dikerjakan.",
		/*3*/"Menunggu perintah untuk melakukan pekerjaan.",
		/*4*/"Dapat dipercaya menjadi pemimpin.",
		/*5*/"Mempunyai keinginan menjadi pemimpin",
		/*6*/"Peka terhadap kondisi yang terjadi di lingkungan sekitar.",
		/*7*/"Mempunyai respon yang baik terhadap lingkungan.",
		/*8*/"Memiliki pemikiran yang kritis.",
		/*9*/"Memiliki sifat angkuh.",
		/*10*/"Sering menyerah sebelum bertindak.",
		//Empati
		/*1*/"Kadang-kadang saya mencoba untuk memahami teman-teman saya dengan membayangkan bagaimana sesuatu terlihat dari sudut pandang mereka.",
		/*2*/"Saya biasanya obyektif ketika saya menonton film, karena saya tidak pernah terhanyut ketika saya menonton film.",
		/*3*/"Meskipun teman-teman mengucilkan saya, saya tetap tidak marah dengan sikap mereka.",
		/*4*/"Saya berusaha menyelami perasaan orang lain dengan cara mendengarkan cerita mereka.",
		/*5*/"Saya merasa sedih ketika teman saya merasa kesulitan.",
		/*6*/"Saya menunjukan keprihatinan dengan cara membantu teman saat mengalami kesulitan dalam mengerjakan tugas sekolah.",
		/*7*/"Saya kadang - kadang merasa cemas ketika teman saya menceritakan permasalahan yang sedang dialami.",
		/*8*/"Terkadang saya berpikir untuk membantu teman jika diberikan imbalan yang sepantasnya.",
		/*9*/"Saya melihat permasalahan orang lain dari segala sisi sebelum saya menilai mereka.",
		/*10*/"Saya sering melamun dan berfantasi tentang hal - hal yang mungkin terjadi pada diri saya, seperti tokoh sebuah film."
	}, jwb;
	
	for(a=0; a<30; a++){
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"|                                  Aplikasi Pengukur Karakteristik                                  |"<<endl;
		cout<<"|                                     Kecerdasan Emosi Seseorang                                    |"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		ulang:
		cout<<endl;
		cout<<a+1<<". "<<soal[a]<<endl;
		cout<<"   ~ (Setuju, Kurang Setuju, Tidak Setuju) ? "; cin>>jwb;
		system("cls");
		if(jwb!="S"&&jwb!="s"&&jwb!="Setuju"&&jwb!="SETUJU"&&jwb!="setuju"&&jwb!="K"&&jwb!="k"&&jwb!="Kurang"&&jwb!="KURANG"&&jwb!="kurang"
		   &&jwb!="T"&&jwb!="t"&&jwb!="Tidak"&&jwb!="TIDAK"&&jwb!="tidak"){
		   	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout<<"|                                                                                                   |"<<endl;
			cout<<"|                                  Aplikasi Pengukur Karakteristik                                  |"<<endl;
			cout<<"|                                     Kecerdasan Emosi Seseorang                                    |"<<endl;
			cout<<"|                                                                                                   |"<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<"                                          JAWABAN ANDA SALAH"<<endl;
			cout<<"                                         SILAHKAN INPUT ULANG"<<endl;
			goto ulang;
		}
		switch(a){
		case 0 ... 9:
			if(jwb=="S"||jwb=="s"||jwb=="Setuju"||jwb=="SETUJU"||jwb=="setuju"){
				inputKesadaranDiri=inputKesadaranDiri+5;
			}
			else if(jwb=="K"||jwb=="k"||jwb=="Kurang"||jwb=="KURANG"||jwb=="kurang"){
				inputKesadaranDiri=inputKesadaranDiri+2.5;
			}
			break;
		case 10 ... 19:
			if(jwb=="S"||jwb=="s"||jwb=="Setuju"||jwb=="SETUJU"||jwb=="setuju"){
				inputMengelolaEmosi=inputMengelolaEmosi+5;
			}
			else if(jwb=="K"||jwb=="k"||jwb=="Kurang"||jwb=="KURANG"||jwb=="kurang"){
				inputMengelolaEmosi=inputMengelolaEmosi+2.5;
			}
			break;
		default:
			if(jwb=="S"||jwb=="s"||jwb=="Setuju"||jwb=="SETUJU"||jwb=="setuju"){
				inputEmpati=inputEmpati+5;
			}
			else if(jwb=="K"||jwb=="k"||jwb=="Kurang"||jwb=="KURANG"||jwb=="kurang"){
				inputEmpati=inputEmpati+2.5;
			}
			break;
		}
	}
	
	system("cls");
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"|                                  Aplikasi Pengukur Karakteristik                                  |"<<endl;
		cout<<"|                                     Kecerdasan Emosi Seseorang                                    |"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"  # Nilai Kesadaran Diri  : "<<inputKesadaranDiri<<endl;
	cout<<"  # Nilai Mengelola Emosi : "<<inputMengelolaEmosi<<endl;
	cout<<"  # Nilai Empati          : "<<inputEmpati<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------\n";
	cout<<"\n\n > Proses Fuzzifikasi\n-----------------------------------------------------------------------------------------------------\n";

	//Fuzzifikasi Kesadaran Diri
	if (inputKesadaranDiri<=15){
		 KesadaranDiriRendah=1;
	}else if (inputKesadaranDiri<25 && inputKesadaranDiri>15){
		 KesadaranDiriRendah=(25-inputKesadaranDiri)/10;
	}else {
		 KesadaranDiriRendah = 0;
	}

	if (inputKesadaranDiri>15 && inputKesadaranDiri <25){
		 KesadaranDiriSedang = (inputKesadaranDiri-15)/10;
	}else if (inputKesadaranDiri == 25){
		 KesadaranDiriSedang = 1;
	}else if(inputKesadaranDiri>25 && inputKesadaranDiri <35){
		 KesadaranDiriSedang = (35-inputKesadaranDiri)/10;
	}else{
		 KesadaranDiriSedang = 0;
	}

	if (inputKesadaranDiri>25 && inputKesadaranDiri <35){
		 KesadaranDiriTinggi = (inputKesadaranDiri-25)/10;
	}else if (inputKesadaranDiri >=35){
		 KesadaranDiriTinggi = 1;
	}else{
		 KesadaranDiriTinggi = 0;
	}

	//Fuzzifikasi Mengelola Emosi
	if (inputMengelolaEmosi<=15){
		MengelolaEmosiRendah = 1;
	}else if (inputMengelolaEmosi<25 && inputMengelolaEmosi >15){
		MengelolaEmosiRendah = (25-inputMengelolaEmosi)/10;
	}else{
		MengelolaEmosiRendah = 0;
	}

	if (inputMengelolaEmosi>15 && inputMengelolaEmosi <25){
		MengelolaEmosiSedang = (inputMengelolaEmosi-15)/10;
	}else if (inputMengelolaEmosi==25){
		MengelolaEmosiSedang = 1;
	}else if (inputMengelolaEmosi>25 && inputMengelolaEmosi <35){
		MengelolaEmosiSedang = (35-inputMengelolaEmosi)/10;
	}else{
		MengelolaEmosiSedang = 0;
	}
	
	if (inputMengelolaEmosi>25 && inputMengelolaEmosi<35){
		MengelolaEmosiTinggi = (inputMengelolaEmosi-25)/10;
	}else if (inputMengelolaEmosi>=35){
		MengelolaEmosiTinggi = 1;
	}else{
		MengelolaEmosiTinggi = 0;
	}

	//Fuzzifikasi
	if (inputEmpati<=15){
		EmpatiRendah = 1;
	}else if (inputEmpati<25 && inputEmpati >15){
		EmpatiRendah = (25-inputEmpati)/10;
	}else{
		EmpatiRendah = 0;
	}

	if (inputEmpati>15 && inputEmpati <25){
		EmpatiSedang = (inputEmpati-15)/10;
	}else if (inputEmpati==25){
		EmpatiSedang = 1;
	}else if (inputEmpati>25 && inputEmpati <35){
		EmpatiSedang = (35-inputEmpati)/10;
	}else{
		EmpatiSedang = 0;
	}
		
	if (inputEmpati>25 && inputEmpati<35){
		EmpatiTinggi = (inputEmpati-25)/10;
	}else if (inputEmpati>=35){
		EmpatiTinggi = 1;
	}else{
		EmpatiTinggi = 0;
	}
	cout<<"  ~ Keanggotaan Kesadaran Diri : "<<endl;
	cout<<"     - Rendah = "<<KesadaranDiriRendah<<"\n";
	cout<<"     - Sedang = "<<KesadaranDiriSedang<<"\n";
	cout<<"     - Tinggi = "<<KesadaranDiriTinggi<<"\n";
	cout<<"  ~ Keanggotaan Mengelola Emosi : "<<endl;
	cout<<"     - Rendah = "<<MengelolaEmosiRendah<<"\n";
	cout<<"     - Sedang = "<<MengelolaEmosiSedang<<"\n";
	cout<<"     - Tinggi = "<<MengelolaEmosiTinggi<<"\n";
	cout<<"  ~ Keanggotaan Empati : "<<endl;
	cout<<"     - Rendah = "<<EmpatiRendah<<"\n";
	cout<<"     - Sedang = "<<EmpatiSedang<<"\n";
	cout<<"     - Tinggi = "<<EmpatiTinggi<<"\n";
	cout<<"-----------------------------------------------------------------------------------------------------\n";
	//pembuatan inferensi
	//1
	cout<<endl;
	cout<<" > Rules yang dipakai : "<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------\n";
	if (KesadaranDiriRendah !=0 && MengelolaEmosiRendah !=0 && EmpatiRendah!=0){
		if (KesadaranDiriRendah<=MengelolaEmosiRendah && KesadaranDiriRendah<=EmpatiRendah){
			EQRendah[i] = KesadaranDiriRendah;
		}else if (MengelolaEmosiRendah <= KesadaranDiriRendah && MengelolaEmosiRendah <= EmpatiRendah){
			EQRendah[i] = MengelolaEmosiRendah;
		}else{
			EQRendah[i]= EmpatiRendah;
		}
		cout<<"  ~ Rules 1  ---> Kecerdasan Emosi (EQ) Rendah = "<<EQRendah[i]<<endl;
		i++;
	}

	//2
    if (KesadaranDiriRendah !=0 && MengelolaEmosiRendah !=0 && EmpatiSedang !=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiRendah && KesadaranDiriRendah<=EmpatiSedang){
			EQRendah[i] = KesadaranDiriRendah;
		}else if (MengelolaEmosiRendah <= KesadaranDiriRendah && MengelolaEmosiRendah <= EmpatiSedang){
			EQRendah[i] = MengelolaEmosiRendah;
		}else{
			EQRendah[i]= EmpatiSedang;
		}
		cout<<"  ~ Rules 2  ---> Kecerdasan Emosi (EQ) Rendah = "<<EQRendah[i]<<endl;
		i++;
	}

	//3
	if (KesadaranDiriRendah !=0 && MengelolaEmosiRendah !=0 && EmpatiTinggi !=0){
		if (KesadaranDiriRendah<=MengelolaEmosiRendah && KesadaranDiriRendah<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiRendah <= KesadaranDiriRendah && MengelolaEmosiRendah <= EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 3  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		i++;
	}

	//4
    if (KesadaranDiriRendah !=0 && MengelolaEmosiSedang !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiSedang && KesadaranDiriRendah<=EmpatiRendah){
			EQRendah[i] = KesadaranDiriRendah;
		}else if (MengelolaEmosiSedang <= KesadaranDiriRendah && MengelolaEmosiSedang <= EmpatiRendah){
			EQRendah[i] = MengelolaEmosiSedang;
		}else{
			EQRendah[i]= EmpatiRendah;
		}
		cout<<"  ~ Rules 4  ---> Kecerdasan Emosi (EQ) Rendah = "<<EQRendah[i]<<endl;
		i++;
	}

	//5
	if (KesadaranDiriRendah !=0 && MengelolaEmosiSedang !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiSedang && KesadaranDiriRendah<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiSedang <= KesadaranDiriRendah && MengelolaEmosiSedang <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 5  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//6
	if (KesadaranDiriRendah !=0 && MengelolaEmosiSedang !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiSedang && KesadaranDiriRendah<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiSedang <= KesadaranDiriRendah && MengelolaEmosiSedang <= EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 6  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//7
	if (KesadaranDiriRendah !=0 && MengelolaEmosiTinggi !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiTinggi && KesadaranDiriRendah<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriRendah && MengelolaEmosiTinggi <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 7  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//8
	if (KesadaranDiriRendah !=0 && MengelolaEmosiTinggi !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiTinggi && KesadaranDiriRendah<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriRendah && MengelolaEmosiTinggi <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 8  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//9
	if (KesadaranDiriRendah !=0 && MengelolaEmosiTinggi !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriRendah<=MengelolaEmosiTinggi && KesadaranDiriRendah<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriRendah && MengelolaEmosiTinggi <= EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 9  ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//10
	if (KesadaranDiriSedang !=0 && MengelolaEmosiRendah !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiRendah && KesadaranDiriSedang<=EmpatiRendah){
			EQRendah[i] = KesadaranDiriRendah;
		}else if (MengelolaEmosiRendah <= KesadaranDiriSedang && MengelolaEmosiRendah <= EmpatiRendah){
			EQRendah[i] = MengelolaEmosiRendah;
		}else{
			EQRendah[i]= EmpatiRendah;
		}
		cout<<"  ~ Rules 10 ---> Kecerdasan Emosi (EQ) Rendah = "<<EQRendah[i]<<endl;
		i++;
	}

	//11
	if (KesadaranDiriSedang !=0 && MengelolaEmosiRendah !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiRendah && KesadaranDiriSedang<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriRendah;
		}else if (MengelolaEmosiRendah <= KesadaranDiriSedang && MengelolaEmosiRendah <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 11 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//12
	if (KesadaranDiriSedang !=0 && MengelolaEmosiRendah !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiRendah && KesadaranDiriSedang<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiRendah<=KesadaranDiriSedang && MengelolaEmosiRendah<=EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 12 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}
	
	//13
	if (KesadaranDiriSedang !=0 && MengelolaEmosiSedang !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiSedang && KesadaranDiriSedang<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiSedang <= KesadaranDiriSedang && MengelolaEmosiSedang <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 13 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//14
	if (KesadaranDiriSedang !=0 && MengelolaEmosiSedang !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiSedang && KesadaranDiriSedang<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiSedang <= KesadaranDiriSedang && MengelolaEmosiSedang <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 14 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//15
	if (KesadaranDiriSedang !=0 && MengelolaEmosiSedang !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiSedang && KesadaranDiriSedang<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiSedang <= KesadaranDiriSedang && MengelolaEmosiSedang <= EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 15 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//16
	if (KesadaranDiriSedang !=0 && MengelolaEmosiTinggi !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiTinggi && KesadaranDiriSedang<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriSedang && MengelolaEmosiTinggi <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 16 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//17
	if (KesadaranDiriSedang !=0 && MengelolaEmosiTinggi !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiTinggi && KesadaranDiriSedang<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriSedang;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriSedang && MengelolaEmosiTinggi <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 17 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//18
	if (KesadaranDiriSedang !=0 && MengelolaEmosiTinggi !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriSedang<=MengelolaEmosiTinggi && KesadaranDiriSedang<=EmpatiTinggi){
			EQTinggi[k] = KesadaranDiriSedang;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriSedang && MengelolaEmosiTinggi <= EmpatiTinggi){
			EQTinggi[k] = MengelolaEmosiTinggi;
		}else{
			EQTinggi[k]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 18 ---> Kecerdasan Emosi (EQ) Tinggi = "<<EQTinggi[k]<<endl;
		k++;
	}

	//19
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiRendah !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiRendah && KesadaranDiriTinggi<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiRendah <= KesadaranDiriTinggi && MengelolaEmosiRendah <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 19 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//20
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiRendah !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiRendah && KesadaranDiriTinggi<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiRendah <= KesadaranDiriSedang && MengelolaEmosiRendah <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 20 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//21
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiRendah !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiRendah && KesadaranDiriTinggi<=EmpatiTinggi){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiRendah <= KesadaranDiriTinggi && MengelolaEmosiRendah <= EmpatiTinggi){
			EQSedang[j] = MengelolaEmosiRendah;
		}else{
			EQSedang[j]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 21 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//22
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiSedang !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiSedang && KesadaranDiriTinggi<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiSedang <= KesadaranDiriTinggi && MengelolaEmosiSedang <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 22 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//23
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiSedang !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiSedang && KesadaranDiriTinggi<=EmpatiSedang){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiSedang <= KesadaranDiriTinggi && MengelolaEmosiSedang <= EmpatiSedang){
			EQSedang[j] = MengelolaEmosiSedang;
		}else{
			EQSedang[j]= EmpatiSedang;
		}
		cout<<"  ~ Rules 23 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//24
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiSedang !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiSedang && KesadaranDiriTinggi<=EmpatiTinggi){
			EQTinggi[k] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiSedang <= KesadaranDiriTinggi && MengelolaEmosiSedang <= EmpatiTinggi){
			EQTinggi[k] = MengelolaEmosiSedang;
		}else{
			EQTinggi[k]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 24 ---> Kecerdasan Emosi (EQ) Tinggi = "<<EQTinggi[k]<<endl;
		k++;
	}

	//25
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiTinggi !=0 && EmpatiRendah!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiTinggi && KesadaranDiriTinggi<=EmpatiRendah){
			EQSedang[j] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriTinggi && MengelolaEmosiTinggi <= EmpatiRendah){
			EQSedang[j] = MengelolaEmosiTinggi;
		}else{
			EQSedang[j]= EmpatiRendah;
		}
		cout<<"  ~ Rules 25 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQSedang[j]<<endl;
		j++;
	}

	//26
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiTinggi !=0 && EmpatiSedang!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiTinggi && KesadaranDiriTinggi<=EmpatiSedang){
			EQTinggi[k] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriTinggi && MengelolaEmosiTinggi <= EmpatiSedang){
			EQTinggi[k] = MengelolaEmosiTinggi;
		}else{
			EQTinggi[k]= EmpatiSedang;
		}
		cout<<"  ~ Rules 26 ---> Kecerdasan Emosi (EQ) Tinggi = "<<EQTinggi[k]<<endl;
		k++;
	}

	//27
	if (KesadaranDiriTinggi !=0 && MengelolaEmosiTinggi !=0 && EmpatiTinggi!=0){
    	if (KesadaranDiriTinggi<=MengelolaEmosiTinggi && KesadaranDiriTinggi<=EmpatiTinggi){
			EQTinggi[k] = KesadaranDiriTinggi;
		}else if (MengelolaEmosiTinggi <= KesadaranDiriTinggi && MengelolaEmosiTinggi <= EmpatiTinggi){
			EQTinggi[k] = MengelolaEmosiTinggi;
		}else{
			EQTinggi[k]= EmpatiTinggi;
		}
		cout<<"  ~ Rules 27 ---> Kecerdasan Emosi (EQ) Sedang = "<<EQTinggi[k]<<endl;
		k++;
	}
	//inferensi
	int n, o, p;
	float max = 0;
	n = i; o = j; p = k;
	max = 0;
	if(i == 0){
            EQRendahAkhir = 0;
	} else {
			for	(int i = 0; i < n; i++){
          		if(EQRendah[i] > max){
           			 max = EQRendah[i];
            	}
       		 }
		    EQRendahAkhir = max;
	}max = 0;
	if(j == 0){
            EQSedangAkhir = 0;
	} else {
			for	(int j = 0; j < o; j++){
          		if(EQSedang[j] > max){
           			 max = EQSedang[j];
            	}
       		 }
		    EQSedangAkhir = max;
	}max = 0;
	if(k == 0){
            EQTinggiAkhir = 0;
	} else {
			for	(int k = 0; k < p; k++){
          		if(EQTinggi[k] > max){
           			 max = EQTinggi[k];
            	}
       		 }
		    EQTinggiAkhir = max;
	}
	cout<<"-----------------------------------------------------------------------------------------------------\n\n";
	cout<<" > Hasil akhir inferensi: \n-----------------------------------------------------------------------------------------------------\n";
	cout<<"  ~ Kecerdasan Emosi (EQ) Rendah = " << EQRendahAkhir<<"\n";
	cout<<"  ~ Kecerdasan Emosi (EQ) Sedang = " << EQSedangAkhir<<"\n";
	cout<<"  ~ Kecerdasan Emosi (EQ) Tinggi = " << EQTinggiAkhir<<"\n";
	cout<<"-----------------------------------------------------------------------------------------------------\n";

	//proses defuzzifikasi
		float sampel, x, t;
		float NilaiEQRendah, NilaiEQSedang, NilaiEQTinggi, pengali[100], EQ, sumX;
		x= 0;
		cout<<endl;
		cout<<" > Masukkan Jumlah Sampel = "; cin>>sampel;
		cout<<endl;


		t=(190/sampel);
		for(i=0; i<sampel; i++){
            x=x+t;
            
            if(x > 138) {
            	NilaiEQRendah=0;
			}else if(x < 138 && x > 88){
        		NilaiEQRendah= (138-x)/50;
			}else{
				NilaiEQRendah= 1;
			}


			if(x >88 && x<138){
				NilaiEQSedang=(x-88)/50;
			}else if(x==138){
				NilaiEQSedang= 1;
			}else if(x>138 && x<190){
				NilaiEQSedang=(190-x)/52;
			}else{
				NilaiEQSedang=0;
			}

			if(x>138 && x<190){
				NilaiEQTinggi=(x-138)/52;
			}else if(x==190){
				NilaiEQTinggi= 1;
			}else{
				NilaiEQTinggi=0;
			}

			
            if(NilaiEQRendah>=EQRendahAkhir){
            	NilaiEQRendah=EQRendahAkhir;
			}
            if(NilaiEQSedang>=EQSedangAkhir) {
				NilaiEQSedang=EQSedangAkhir;
			}
            if(NilaiEQTinggi>=EQTinggiAkhir) {
            	NilaiEQTinggi=EQTinggiAkhir;
			}


                if(NilaiEQSedang >= NilaiEQRendah && NilaiEQSedang >= NilaiEQTinggi){
       				 pengali[i]= NilaiEQSedang;
    			} else if (NilaiEQRendah >= NilaiEQSedang && NilaiEQRendah >= NilaiEQTinggi){
       				 pengali[i]=NilaiEQRendah;
        		} else{
        			 pengali[i]=NilaiEQTinggi;
				}
				
            EQ=EQ+(x*pengali[i]);
            sumX=sumX+pengali[i];
        }
        float EQAkhir=EQ/sumX;
        cout<<endl;
        cout<<" # Karakteristik Kecerdasan Emosi (EQ) Anda = "<<EQAkhir<<endl;
    	cout<<" # Anda termasuk orang dengan Kecerdasan Emosi (EQ)";
    	if(EQAkhir > 164){
    		cout<<" Tinggi.";
    	}else if(EQAkhir == 164){
    		cout<<" antara Sedang dan Tinggi.";
		}else if(EQAkhir > 113){
			cout<<" Sedang.";
		}else if(EQAkhir == 113){
			cout<<" antara Rendah dan Sedang.";
		}else {
			cout<<" Rendah.";
		}
		cout<<endl;
		cout<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"|                                            Terima Kasih                                           |"<<endl;
		cout<<"|                                                                                                   |"<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	system("pause");
}

