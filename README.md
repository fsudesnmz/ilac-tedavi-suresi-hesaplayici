# İlaç Kullanım Süresi Hesaplama Programı

## Proje Açıklaması

Bu C programı, kullanıcının iki farklı ilaç alım zamanı arasındaki süreyi hesaplamasına olanak sağlayan bir araçtır. Program, epoch (Unix) zamanı kullanarak tarihler arasındaki tam zamanı günler, saatler, dakikalar ve saniyeler cinsinden hesaplar.

## Özellikler

- Kullanıcıdan iki ayrı ilaç alım zamanı girişi
- Tarih ve saat bilgilerinin detaylı olarak alınması
- Epoch zamanına dönüştürme
- İki zaman noktası arasındaki farkın hesaplanması
- Sonucun günler, saatler, dakikalar ve saniyeler olarak görüntülenmesi

## Kullanılan Teknolojiler

- C Programlama Dili
- `<time.h>` kütüphanesi
- Epoch (Unix) zaman hesaplama teknikleri

## Kod Yapısı

Program iki ana bölümden oluşur:

1. **Veri Yapıları**:
   - `MedicationTime` struct'ı tarih ve saat bilgilerini saklar
   - İç içe geçmiş struct'lar ile tarih ve saat ayrı ayrı yönetilir

2. **Fonksiyonlar**:
   - `convertToEpoch()`: Tarih ve saat bilgilerini epoch zamanına çevirir
   - `main()`: Kullanıcı etkileşimi ve hesaplama işlemlerini gerçekleştirir

## Nasıl Çalışır?

1. Program kullanıcıdan ilk ilaç alım zamanını ister
2. Ardından son ilaç alım zamanını ister
3. Her iki zamanı da epoch zamanına dönüştürür
4. İki zaman arasındaki farkı hesaplar
5. Farkı günler, saatler, dakikalar ve saniyeler olarak görüntüler

## Kullanım Örneği

Ilk ilac alim zamani:
Yil: 2023
Ay: 5
Gun: 15
Saat: 10
Dakika: 30
Saniye: 0

Son ilac alim zamani:
Yil: 2023
Ay: 5
Gun: 20
Saat: 15
Dakika: 45
Saniye: 30

Toplam ilac kullanma suresi: 5 gun 5 saat 15 dakika 30 saniye

## Gereksinimler

- C derleyicisi(GCC önerilir)
- Standart C kütüphaneleri
