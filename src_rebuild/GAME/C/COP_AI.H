#ifndef COP_AI_H
#define COP_AI_H


extern void InitCopState(struct _CAR_DATA *cp, char *extraData); // 0x0002F680

extern void WibbleDownTheRoad(struct VECTOR *from, int distance, struct VECTOR *to); // 0x0002D78C

extern void InitCops(); // 0x0002D99C

extern void ControlCops(); // 0x0002DAD8

extern void CopControl(struct _CAR_DATA *cp); // 0x0002F60C

extern void CopControl1(struct _CAR_DATA *cp); // 0x0002DEFC

extern int FindCost(int x, int z, int dvx, int dvz); // 0x0002F8DC

extern void InitCopData(struct COP_DATA *pCopData); // 0x0002F7F8

extern void UpdateCopSightData(); // 0x0002F844

extern void ControlCopDetection(); // 0x0002ECD8

extern void PassiveCopTasks(struct _CAR_DATA *cp); // 0x0002F6FC

extern void ControlNumberOfCops(); // 0x0002F3CC


#endif