#include <stdio.h>
int mukemmel(int sayi)
{
  int toplam=0;
  for(int i=1;i<sayi;i++)
  {
    if(sayi%i==0)
    // printf("%d\n",i);
    toplam+=i;
  }
  if(toplam==sayi)
  {
    printf("Sayiniz mukemmeldir.");
  }
  else
  {
    printf("Sayiniz mukemmel degildir.");
  }
}
int main() {
  int sayi;
  printf("Sayinizi giriniz=");
  scanf("%d",&sayi);
  int sonuc=mukemmel(sayi);
   
  return 0;
}
