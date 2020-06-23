int sensorReading = 0;  //定义sensorReading变量

void setup()
{
  pinMode(A0, INPUT); //讲A0端口输入
  Serial.begin(9600);

  pinMode(9, OUTPUT);  //9号端口输出
}

void loop()
{
  // 读取传感器信息
  sensorReading = analogRead(A0);
  // 打印传感器读数，在串行监视器显示
  Serial.println(sensorReading);
  // 将传感器读数映射到扬声器的范围
  tone(9, 440 * pow(2.0, (constrain(int(map(sensorReading, 0, 1023, 36, 84)), 35, 127) - 57) / 12.0), 1000); //定义发声时长与频率
  delay(10); // 稍微延迟以提高仿真性能
}