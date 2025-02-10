#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//İlaç alım taihini tutacak struct yapısı
struct MedicationTime {
	
	struct {
	  int day;
	  int month;
	  int year; 
	} date;
	
	struct {
	  int hour;
	  int minute;
	  int second;
	} time;
};

// MeticationTime struct'ını epoch zamanına çeviren fonksiyon
//Epoch zamanı (Unix zamanı olarak da bilinir),1 Ocak 1970 00:00:00 UTC`den itibaren geçen saniye sayısını temsil eden bir zaman ölçüm sistemidir.
 time_t convertToEpoch(struct MedicationTime mt) {
    struct tm timeinfo = {0};

    timeinfo.tm_year = mt.date.year - 1900;  // Yıl 1900'den başlar
    timeinfo.tm_mon = mt.date.month - 1;     // Aylar 0'dan başlar
    timeinfo.tm_mday = mt.date.day;
    timeinfo.tm_hour = mt.time.hour;
    timeinfo.tm_min = mt.time.minute;
    timeinfo.tm_sec = mt.time.second;

    return mktime(&timeinfo);
}



int main() {
	
 struct MedicationTime first_dose,last_dose; 
 time_t	epoch1,epoch2;
 double difference;
 int days,hours,minutes;
 
 //ilk ilaç alım zamanını kullanıcıdan isteme
    printf("Ilk ilac alim zamani:\n");
    printf("Yil: ");
    scanf("%d",&first_dose.date.year);
    printf("Ay: ");
    scanf("%d",&first_dose.date.month);
    printf("Gun: ");
    scanf("%d",&first_dose.date.day);
    printf("Saat: ");
    scanf("%d",&first_dose.time.hour);
    printf("Dakika: ");
    scanf("%d",&first_dose.time.minute);
    printf("Saniye: ");
    scanf("%d",&first_dose.time.second);
 
 //son ilaç alım zamanını kullanıcıdan isteme
    printf("Son ilac alim zamani:\n");
    printf("Yil: ");
    scanf("%d",&last_dose.date.year);
    printf("Ay: ");
    scanf("%d",&last_dose.date.month);
    printf("Gun: ");
    scanf("%d",&last_dose.date.day);
    printf("Saat: ");
    scanf("%d",&last_dose.time.hour);
    printf("Dakika: ");
    scanf("%d",&last_dose.time.minute);
    printf("Saniye: ");
    scanf("%d",&last_dose.time.second);
    
// Epoch deðerlerine çevirme ve farkı hesaplama
    epoch1 = convertToEpoch(first_dose);
    epoch2 = convertToEpoch(last_dose);
    difference = difftime(epoch2, epoch1);
    
    days = difference / (24 * 3600);
    difference = difference - (days * 24 * 3600);
    
    hours = difference / 3600;
    difference = difference - (hours * 3600);
    
    minutes = difference / 60;
    difference = difference - (minutes * 60);
	
  // Hesaplanan farkı ekrana gösterme  
    printf("Toplam ilac kullanma suresi: %d gun %d saat %d dakika %.0f saniye",days,hours,minutes,difference);
  
    
    
    
	
	
	return 0;
}
