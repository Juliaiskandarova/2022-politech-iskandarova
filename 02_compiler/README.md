1) objdump -h a.out
Мы видим таблицу с различными секциями (размер, VMA и LMA - виртульная память и память загрузки и тд), компилирование с данным ключом покажет информацию из заголовков разделов файла.
2) objdump -s a.out
Помимо отображения всей информации заголовка файла, он также отображает соответствующие им шестнадцатеричные коды. Мы видим полное содержимое разделов,секций.
Размер секции .text составляет 144 байт
`````````````````````````````````````````````````````````````````````````
Time results
--------------
-O0: real    0m0.549s
     user    0m0.545s
     sys     0m0.000s

-O1: real    0m0.282s
     user    0m0.268s
     sys     0m0.010s

-O2: real    0m0.131s
     user    0m0.126s
     sys     0m0.000s

-O3: real    0m0.104s
     user    0m0.100s
     sys     0m0.000s

-Os: real    0m0.639s
     user    0m0.634s
     sys     0m0.000s

-Ofast: real    0m0.108s
        user    0m0.103s
        sys     0m0.000s

-Og: real    0m0.298s
     user    0m0.292s
     sys     0m0.000s
     
-Oz: real    0m0.651s
     user    0m0.646s
     sys     0m0.000s
`````````````````````````````````````````````````````````````````````````````````
Size results
--------------
-O0: 17KB
--------------
-O1: 17KB
--------------
-O2: 17KB
--------------
-O3: 17KB
--------------
-Os: 17KB
--------------
-Ofast: 18KB
--------------
-Og: 17KB
--------------
-Oz: 17KB
--------------