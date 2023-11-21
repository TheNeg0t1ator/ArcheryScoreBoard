#ifndef BASEGAMECLASS_H
#define BASEGAMECLASS_H

typedef struct{
    int Arrows;
    int Rounds;
}RoundStruct;

RoundStruct Askrounds(void){
    RoundStruct output;
    cout << "How many arrows per round? " << endl << ": ";
    cin >> output.Arrows;
    cout << "How many Rounds? " << endl << ": ";
    cin >> output.Rounds;
    return output;
}

class basegameclass
{

public:
            basegameclass(int Arrows, int rounds);
    int     getrounds(){return roundCount;};
    int     getarrow(){return arrowCount;};
private:    
	int     roundCount, arrowCount;
    bool    basegameclassDone;
};

basegameclass::basegameclass(int Arrows, int rounds){
    roundCount = rounds;
    arrowCount = Arrows;
}





#endif
