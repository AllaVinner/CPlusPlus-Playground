
enum suit {h, d, c, s};
typedef enum suit suit
typedef struct card{short pip; suit s;} card;

void int_to_card(int i, card* card)
{
    card->pip = i % 13;
    card->s = (i / 13) + 1;
}



int main(void)
{

    return 0;
}

