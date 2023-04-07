# alice-shiftOR
alice
Amacı:Bu C++ programı, "Shift-OR" algoritmasını kullanarak, belirli anahtar kelimelerin bir metin dosyasında kaç kez geçtiğini sayar.
Algoritma, verilen anahtar kelime için bir bit maskeleme işlemi yapar ve ardından metnin her karakteri için bit dizisini günceller. 
Bu güncelleme işlemi, metnin her karakteri için yapılır ve eşleşme olup olmadığı kontrol edilir. 
Eşleşme olduğunda, ilgili anahtar kelime için sayaç artırılır ve sonunda her anahtar kelimesinin kaç kez geçtiği yazdırılır.
Programın amacı, bir metin içinde belirli anahtar kelimelerin kaç kez geçtiğini saymak ve bu sayıları ekrana yazdırmaktır.

Analiz:Bu algoritmanın çalışma zamanı O(nm), burada n metnin uzunluğunu, m ise anahtar kelimenin uzunluğunu temsil eder.
En iyi durumda, algoritmanın çalışma zamanı O(n) olacaktır. Bu durumda, anahtar kelime metinde hiç tekrar etmez ve algoritmanın tüm işlemleri sadece bir kere yapılır.
En kötü durumda, algoritmanın çalışma zamanı O(nm) olacaktır. Bu durumda, anahtar kelime metinde sık sık tekrar eder ve algoritmanın tüm işlemleri her karakter için m adım yapılır.
Ortalama durumda, algoritmanın çalışma zamanı O(nm) olacaktır. Ancak, metin ve anahtar kelime dağılımı gibi faktörlerden dolayı bu süre değişebilir.
Algoritmanın en iyi durumu, anahtar kelimenin metinde hiç tekrar etmediği durumdur. En kötü durumu ise, anahtar kelimenin metinde çok sık tekrar ettiği durumdur. Ancak, genel olarak algoritma metinlerdeki anahtar kelimelerin sayısını hızlı bir şekilde hesaplamak için oldukça etkilidir.




