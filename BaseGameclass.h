#ifndef BASEGAMECLASS_H
#define BASEGAMECLASS_H

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

basegameclass::basegameclass(int Arrows, int rounds)
{
    roundCount = rounds;
    arrowCount = Arrows;
}





#endif
