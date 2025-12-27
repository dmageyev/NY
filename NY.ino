#define BUZZER A0
#define PIN_R 5
#define PIN_G 4
#define PIN_B 3

// ===== Ноты (G major) =====
#define N_G4 392
#define N_A4 440
#define N_B4 494
#define N_C5 523
#define N_D5 587
//#define N_E5 659
//#define N_Fs5 740
//#define N_G5 784

#define REST 0

// ===== Темп =====
const int BPM = 120;
const unsigned long WHOLE = (60000UL * 4) / BPM;

// ===== Мелодия (партитурная) =====
const int melody[] = {
  // Куплет
  N_B4, N_B4, N_B4,
  N_B4, N_B4, N_B4,
  N_B4, N_D5, N_G4, N_A4, N_B4,

  N_C5, N_C5, N_C5, N_C5,
  N_C5, N_B4, N_B4, N_B4,
  N_B4, N_A4, N_A4, N_B4,
  N_A4, N_D5,

  // Припев
  N_B4, N_B4, N_B4,
  N_B4, N_B4, N_B4,
  N_B4, N_D5, N_G4, N_A4, N_B4,

  N_C5, N_C5, N_C5, N_C5,
  N_C5, N_B4, N_B4, N_B4,
  N_D5, N_D5, N_C5, N_A4, N_G4, REST
};

// ===== Длительности =====
// 1 = целая, 2 = половинная, 4 = четверть, 8 = восьмая
const int N_dur[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8, 4,

  8, 8, 8, 8,
  8, 8, 8, 4,
  8, 8, 8, 8,
  4, 4,

  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8, 4,

  8, 8, 8, 8,
  8, 8, 8, 4,
  8, 8, 8, 8, 2, 1
};

const int N_COUNT = sizeof(melody) / sizeof(int);


void setup() {
  
}

void loop() {
  // Пусто — мелодия проигрывается один раз
}
