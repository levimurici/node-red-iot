/* defines - wi-fi */
#define SSID_WIFI "IPQ"
#define PASSWORD "inovacao"
#define INTERVALO_DE_ENVIO 1000
//#define SERVER_IP "192.168.101.65:3000"
#define mqtt_server "192.168.101.28"
unsigned int porta = 1884;

//#define sub1 "device1/alarm1"
#define sub1 "device1/relay1"
#define post1 "device1/alarm1"

/* Variáveis de api e wi-fi */
unsigned long last_connection_time;

/* Variáveis de interface e controle */
const int relay_1 = 15; //D8
const int encoder = 12; //D6
const int status_led = 13; //D7

/* Controle de estados */
String state_alarm1;
String state_relay1;

/* Controle de estados e Json */
char json_to_send[256];
String MY_IP_ADDR, MY_MAC_ADDR;

#define MSG_BUFFER_SIZE (50)
unsigned long lastMsg = 0;
char msg[MSG_BUFFER_SIZE];
int value = 0;
