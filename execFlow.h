#ifndef EXEC_FLOW
#define EXEC_FLOW

typedef unsigned int u32;

enum {
	DMA_MRK	= 1,
};

struct DstJump {
	DstJump(u32 src, u32 dst, bool cond, bool isSubRoutine);

	DstJump*	next;
	u32 src;
	u32 dst;
	u32 mode;	// Read/Write Modifier
	bool isSubRoutine;
	bool isCond;
};

void exportGraphVizFile();
void loadGraph();
void saveGraph();
void InitExecFlow	();
void ResetExecFlow	(u32 src);
void PatchBeforeOpcode(u32 src);
void VerifyBlockConnectivity(u32 src);
void Jump			(u32 src, u32 dst, bool cond, bool subRoutine);
void JumpIRQ		(u32 src, u32 dst);
void JumpNMI		(u32 src, u32 dst);
void JumpRTI		(u32 old, u32 dst);
void JumpRTS		(u32 rtsAdr,u32 retAdr);
void markUse		(u32 address, int write);

#endif
