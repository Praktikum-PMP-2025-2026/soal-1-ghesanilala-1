/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Senin, 13 April 2025
 *   Nama (NIM)          : Najwa Ghaysani Athaya Ardyanto (13224023)
 *   Nama File           : soal.c
 *   Deskripsi           : membuat suatu program untuk evaluasi hasil penelitian dari seorang peneliti denga
 * input berupa satu baris yang berisi (izin suhu radiasi jam). izin bernilai 1 sampai 3 (char), suhu dalam satuan 0.1°C (float) (dikalikan)
 * radiasi bilangan bulat non negatif (int)
 * jam adalah bilangan bulat 0 sampai 23 (int)
 */

 #include <stdio.h>
 #include <string.h>


int proses(){
    int i;
    int rad, hour;
    float s;
    scanf("%d %f %d %d", &i, &s, &rad, &hour);
    if((i<1 || i>3) && rad<0 && (hour<0 || hour>23)){
        return 0;
    }
    else{
           s= 371/10;
            if(rad >= 6 ){
                printf("TOLAK\n");
            }
            else if(s>=390){
                printf("KARANTINA\n");
            }
            else if(i==1 && (hour<6 || hour > 20)){
                printf("TOLAK\n");
            }
            else if(i==1){
                printf("MASUK\n");
            }
            else if(i==2 && (rad<=2) && (8<hour<18) && (s<390)){
                printf("MASUK\n");
            }
            else if(i==2){
                printf("PEMERIKSAAN\n");
            }
            else if((i==3) && (rad ==0) && (s<380)){
                printf("MASUK\n");
            }
            else{
                printf("TOLAK\n");
            }
        }
    }
 

//main cuma manggil fungsi selebihnya dilakukan di fungsi lain
 int main() {
    proses();
    return 0;
 }
 
