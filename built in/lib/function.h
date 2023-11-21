//Ini adalah fungsi sorting array menggunakan bubble sort sederhana, fungsi ini memiliki 2 argumen, yaitu argumen untuk array(input[]), dan argumen untuk panjang array(length)

void _ARRAY(int input[],int length){
  input[length];
  //loop pertama digunakan sebagai wadah untuk tahapan loop ke-n/ke-length, dengan length sebagai pajang array
  for(int first=0; first<length; first++){
    //loop kedua digunakan untuk perulangan perbandingan untuk setiap array[n] lebih besar dari array[n+1]

    //kondisi harus n-1, untuk mencegah program membandingkan nilai array terakhir dengan nilai array selanjutnya / array[n+1] yang tidak terdefinisikan
    for(int second=0; second<(length-1); second++){
      //komparasi dari array[n] ke array[n+1]
      if(input[second]>input[second+1]){
        int temporary=input[second];//variabel temporary digunakan sebagai wadah sementara untuk menampung nilai input[second]
        input[second]=input[second+1];
        input[second+1]=temporary;
        //tahap ini untuk mengganti nilai array[n] menjadi [n+1] dan sebaliknya
      }
    }
  }
}
