#ifndef FELONY_H
#define FELONY_H

#define FELONY_MIN_VALUE		(658)
#define FELONY_MAX_VALUE		(4096)

extern FELONY_DATA felonyData;

extern void InitFelonyDelayArray(FELONY_DELAY *pFelonyDelay, short *pMaximum, int count); // 0x0004D364

extern void InitFelonyData(FELONY_DATA *pFelonyData); // 0x0004D3A0

extern int GetCarHeading(int direction); // 0x0004D420

extern char GetCarDirectionOfTravel(CAR_DATA *cp); // 0x0004D430

extern void NoteFelony(FELONY_DATA *pFelonyData, char type, short scale); // 0x0004C330

extern void AdjustFelony(FELONY_DATA *pFelonyData); // 0x0004C8B4

extern void CheckPlayerMiscFelonies(); // 0x0004CC28

extern void InitFelonySystem(); // 0x0004D280

extern void CarHitByPlayer(CAR_DATA *victim, int howHard); // 0x0004D2B8


#endif
