int buzzer = A0;
int buttons[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

float DO            = 2112.00000000000f;
float DO_SUSTENIDO  = 2237.58606720000f;
float RE            = 2370.63987127252f;
float RE_SUSTENIDO  = 2511.60546700199f;
float MI            = 2660.95331404687f;
float FA            = 2819.18184705537f;
float FA_SUSTENIDO  = 2986.81913914501f;
float SOL           = 3164.42466429791f;
float SOL_SUSTENIDO = 3352.59116455352f;
float LA            = 3551.94662823048f;
float LA_SUSTENIDO  = 3763.15638577961f;
float SI            = 3986.92533026287f;

void setup() {

	pinMode(buzzer, OUTPUT);

	for (int i = 0; i < 12; i++) {
		pinMode(buttons[i], INPUT);
	}
}

void loop() {
	if (digitalRead(buttons[0])       tone(buzzer, DO);
	else if (digitalRead(buttons[1])  tone(buzzer, DO_SUSTENIDO);
	else if (digitalRead(buttons[2])  tone(buzzer, RE);
	else if (digitalRead(buttons[3])  tone(buzzer, RE_SUSTENIDO);
	else if (digitalRead(buttons[4])  tone(buzzer, MI);
	else if (digitalRead(buttons[5])  tone(buzzer, FA);
	else if (digitalRead(buttons[6])  tone(buzzer, FA_SUSTENIDO);
	else if (digitalRead(buttons[7])  tone(buzzer, SOL);
	else if (digitalRead(buttons[8])  tone(buzzer, SOL_SUSTENIDO);
	else if (digitalRead(buttons[9])  tone(buzzer, LA);
	else if (digitalRead(buttons[10]) tone(buzzer, LA_SUSTENIDO);
	else if (digitalRead(buttons[11]) tone(buzzer, SI);
	else noTone(buzzer);
}
