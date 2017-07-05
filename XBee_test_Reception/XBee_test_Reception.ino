// Reception

int val;  // 受信データ用の変数
int Pin = 9;

void setup(){

  Serial.begin(9600);
  pinMode(Pin, OUTPUT);
}

void loop(){

  if(Serial.available() > 0){// データが来たら
  
    val = Serial.read();  // データを読み込み,valへ代入
  }
  
  if(val == 'H'){// valが「H」のとき
  
    digitalWrite(Pin, HIGH);
  }else{// valが「L」のとき
  
    digitalWrite(Pin, LOW);
  }
}
