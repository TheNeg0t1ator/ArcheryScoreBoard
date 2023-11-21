#ifndef BASEGAMECLASS_H
#define BASEGAMECLASS_H

typedef struct{
    int Arrows;
    int Rounds;
}RoundStruct;



class basegameclass
{

public:
            basegameclass(RoundStruct input);
    int     getrounds(){return RoundInfo.Rounds;};
    int     getarrow(){return RoundInfo.Arrows;};
    void    setRoundInfo(RoundStruct input){RoundInfo = input;};
private:    
	RoundStruct RoundInfo;
    bool    basegameclassDone;
};

basegameclass::basegameclass(RoundStruct input){
    RoundInfo.Rounds = input.Rounds;
    RoundInfo.Arrows = input.Arrows;
}

RoundStruct Askrounds(void){
    RoundStruct output;
    cout << "How many arrows per round? " << endl << ": ";
    cin >> output.Arrows;
    cout << "How many Rounds? " << endl << ": ";
    cin >> output.Rounds;
    return output;
}



#endif
