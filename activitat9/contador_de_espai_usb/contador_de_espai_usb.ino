long drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println(" GB large.");
Serial.print("In theory, it can store ");
Serial.print(drive_mb = drive_gb * 1024);
Serial.print(" Megabytes, ");
Serial.print(drive_kb = drive_mb * 1024);
Serial.println(" Kilobytes");
Serial.print("But it really only store ");
Serial.print(real_drive_mb = drive_gb * 1000);
Serial.print(" Megabytes, ");
Serial.print(real_drive_kb = real_drive_mb * 1000);
Serial.println(" Kilobytes");
Serial.print("You are missing ");
Serial.print(missing_drive_kb = drive_kb - real_drive_kb);
Serial.print(" Kilobytes");
}

void loop() {
  // put your main code here, to run repeatedly:

}
