#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1;
    float sayi2;
    char islem;
    float sonuc;

    while(1){
        printf("lutfen 1.sayiyi giriniz\n");
        scanf("%f",&sayi1);
        printf("lutfen 2.sayiyi giriniz\n");
        scanf("%f",&sayi2);
        printf("islem se�iniz \n+\n-\n*\n/\n");
        scanf("%s",&islem);

        if(islem == '+'){
            sonuc=sayi1+sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem=='-'){
            sonuc=sayi1-sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem=='*' ||islem=='x'){
            sonuc=sayi1*sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem='/'){
            sonuc=sayi1/sayi2;
            printf("sonuc %f\n",sonuc);
        }
    }

    return 0;
}



/*
scanf() i�in
%c  tek bir karakter    char
%d  veya  %i i�aretli ondal�k tamsay�    int, short
%ld     uzun i�aretli ondal�k tamsay�   long
%u  i�aretsiz ondal�k tamsay�   unsigned int, unsigned short
%f  Ger�el say� float, double
%s  karakter dizisi (string)    char
%lu i�aretsiz uzun tamsay�  unsigned long
%x	Hexa decimal say�lar
%o	Octal say�lar



for(a=0;a<10;a++){
		printf("%d \n",a);
	}
 while (id<=10) {
     printf("%d ", id);
     id++; // D�ng� kontrol de�i�keni de�er art�rma
  }
  do {
     printf("%d ", id++); 
  } while (id<=10);

	*/
