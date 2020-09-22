
using namespace std;
class Hero
    {
        protected:
            int level = 1;      //(poziom doswiadczenia)
            int exp = 0;        //(punkty doswiadczenia)
            int HP = 5;         //(punkty zdrowia)
            int endurance = 5;  //(ilosc atakow fizycznych)
            int mana = 5;       //(ilosc atakow magicznych)
            int condp = 1;      //(odnawianie wytrzymalosci)
            int condm = 1;      //(odnawianie many)
            int defp = 1;       //(ogranicza dostawane obrazenia fizyczne)
            int defm = 1;       //(ogranicza dostawane obrazenia magiczne)
            int strp = 1;       //(obrażenia fizyczne)
            int strm = 1;       //(obrażenia magiczne)
            int acc = 1;        //(szansa na trafienie)
            int intel = 0;        //(zdolnosc rzucenia czaru danego poziomu)
            int luck = 1;       //(szansa na dropy)
            int agt = 1;        //(szansa na otwieranie zamków)
            int trade = 1;      //(szansa na lepsze ceny)
            int rep = 0;        //(reputacja)
        public:

          virtual void attack()=0;
    };
class Knight :public Hero
    {
      void attack();
    };
class Mage :public Hero
    {
      void attack();
    };
extern Knight Eluwina;
extern Mage Eluwin;
extern Hero *pointer;

