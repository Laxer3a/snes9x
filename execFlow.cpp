#include "execFlow.h"

int AdressToMode(u32 Address) {
	int res = 0;
	if ((Address & 0xffc0) == 0x2140) // APUIO0, APUIO1, APUIO2, APUIO3
	{	
		res = 2;
	} else
		if (Address <= 0x2183)
		{
			res = 1;
			switch (Address)
			{
			case 0x2100: // INIDISP
				break;
			case 0x2101: // OBSEL
				break;
			case 0x2102: // OAMADDL
				break;
			case 0x2103: // OAMADDH
				break;
			case 0x2104: // OAMDATA
				break;
			case 0x2105: // BGMODE
				break;
			case 0x2106: // MOSAIC
				break;
			case 0x2107: // BG1SC
				break;
			case 0x2108: // BG2SC
				break;
			case 0x2109: // BG3SC
				break;
			case 0x210a: // BG4SC
				break;
			case 0x210b: // BG12NBA
				break;
			case 0x210c: // BG34NBA
				break;
			case 0x210d: // BG1HOFS, M7HOFS
				break;
			case 0x210e: // BG1VOFS, M7VOFS
				break;
			case 0x210f: // BG2HOFS
				break;
			case 0x2110: // BG2VOFS
				break;
			case 0x2111: // BG3HOFS
				break;
			case 0x2112: // BG3VOFS
				break;
			case 0x2113: // BG4HOFS
				break;
			case 0x2114: // BG4VOFS
				break;
			case 0x2115: // VMAIN
				break;
			case 0x2116: // VMADDL
				break;
			case 0x2117: // VMADDH
				break;
			case 0x2118: // VMDATAL
				break;
			case 0x2119: // VMDATAH
				break;
			case 0x211a: // M7SEL
				break;
			case 0x211b: // M7A
				break;
			case 0x211c: // M7B
				break;
			case 0x211d: // M7C
				break;
			case 0x211e: // M7D
				break;
			case 0x211f: // M7X
				break;
			case 0x2120: // M7Y
				break;
			case 0x2121: // CGADD
				break;
			case 0x2122: // CGDATA
				break;
			case 0x2123: // W12SEL
				break;
			case 0x2124: // W34SEL
				break;
			case 0x2125: // WOBJSEL
				break;
			case 0x2126: // WH0
				break;
			case 0x2127: // WH1
				break;
			case 0x2128: // WH2
				break;
			case 0x2129: // WH3
				break;
			case 0x212a: // WBGLOG
				break;
			case 0x212b: // WOBJLOG
				break;
			case 0x212c: // TM
				break;
			case 0x212d: // TS
				break;
			case 0x212e: // TMW
				break;
			case 0x212f: // TSW
				break;
			case 0x2130: // CGWSEL
				break;
			case 0x2131: // CGADSUB
				break;
			case 0x2132: // COLDATA
				break;
			case 0x2133: // SETINI
				break;
			case 0x2134: // MPYL
			case 0x2135: // MPYM
			case 0x2136: // MPYH
			case 0x2137: // SLHV
			case 0x2138: // OAMDATAREAD
			case 0x2139: // VMDATALREAD
			case 0x213a: // VMDATAHREAD
			case 0x213b: // CGDATAREAD
			case 0x213c: // OPHCT
			case 0x213d: // OPVCT
			case 0x213e: // STAT77
			case 0x213f: // STAT78
				break;
			case 0x2180: // WMDATA
				break;
			case 0x2181: // WMADDL
				break;
			case 0x2182: // WMADDM
				break;
			case 0x2183: // WMADDH
				break;
			}
		}
		else
			if (Address < 0x4200)
			{
				res = 4;
				switch (Address)
				{
				case 0x4016: // JOYSER0
					break;

				case 0x4017: // JOYSER1
					break;

				default:
					break;
				}
			}
			else
				if ((Address & 0xff80) == 0x4300)
				{
					res = 4;
					int	d = (Address >> 4) & 0x7;

					switch (Address & 0xf)
					{
					case 0x0: // 0x43x0: DMAPx
						break;
					case 0x1: // 0x43x1: BBADx
						break;
					case 0x2: // 0x43x2: A1TxL
						break;
					case 0x3: // 0x43x3: A1TxH
						break;
					case 0x4: // 0x43x4: A1Bx
						break;
					case 0x5: // 0x43x5: DASxL
						break;
					case 0x6: // 0x43x6: DASxH
						break;
					case 0x7: // 0x43x7: DASBx
						break;
					case 0x8: // 0x43x8: A2AxL
						break;
					case 0x9: // 0x43x9: A2AxH
						break;
					case 0xa: // 0x43xa: NLTRx
						break;
					case 0xb: // 0x43xb: ????x
					case 0xf: // 0x43xf: mirror of 0x43xb
						break;
					default:
						break;
					}
				}
				else if ((Address & 0xff00) == 0x4200)
				{
					res = 4;

					switch (Address)
					{
					case 0x4200: // NMITIMEN
						break;
					case 0x4201: // WRIO
						break;
					case 0x4202: // WRMPYA
						break;
					case 0x4203: // WRMPYB
						break;
					case 0x4204: // WRDIVL
					case 0x4205: // WRDIVH
						break;
					case 0x4206: // WRDIVB
						break;
					case 0x4207: // HTIMEL
						break;
					case 0x4208: // HTIMEH
						break;
					case 0x4209: // VTIMEL
						break;
					case 0x420a: // VTIMEH
						break;
					case 0x420b: // MDMAEN
						break;
					case 0x420c: // HDMAEN
						break;
					case 0x420d: // MEMSEL
						break;
					case 0x4210: // RDNMI
					case 0x4211: // TIMEUP
					case 0x4212: // HVBJOY
					case 0x4213: // RDIO
					case 0x4214: // RDDIVL
					case 0x4215: // RDDIVH
					case 0x4216: // RDMPYL
					case 0x4217: // RDMPYH
					case 0x4218: // JOY1L
					case 0x4219: // JOY1H
					case 0x421a: // JOY2L
					case 0x421b: // JOY2H
					case 0x421c: // JOY3L
					case 0x421d: // JOY3H
					case 0x421e: // JOY4L
					case 0x421f: // JOY4H
						break;
					default:
						break;
					}
				}

	return res;
}

/*
struct DstJump {
	DstJump*	next;
	u32 src;
	u32 dst;
	u32 mode;	// Read/Write Modifier
	bool isSubRoutine;
	bool isCond;
};*/

struct Block {
	void updateEnd(u32 adr);

	u32 start;
	u32 end;
	u32 selfID;
	u32 mode;
	bool terminateRTS;
	bool terminateRTI;
};

struct Link {
	Link* next;
	u32 blockSrc;
	u32 blockDst;	// Dst ALWAYS start of block.
	u32 mode;
};

#if 0
	Jump to an address :
	1 - Update current block end. (src adr)
	2 - Find target block :
		- Start adress of a block : Do nothing.
			- Adress within a block : Split.
				-> Add link from old to new block.
		- Unknown block : Add new block.


#endif

static const int TABLE_SIZE = 16*1024*1024;

Block*	gCurrBlock;
Block*	gExecuted[TABLE_SIZE];	// 64 / 128 MB.


Block   gBlocks[TABLE_SIZE];	// For now a lot too much. 1/10 should be enough.
Link    gLinks[TABLE_SIZE];		// Same Here...
Link*	gLinksFrom[TABLE_SIZE];		// Same here...

u32     gBlockCount;
u32     gLinkCount;
bool	gInit = false;

/*
DstJump*	gDstJumps[TABLE_SIZE];	// 16 Mb Jump tables.
bool		gSrcJumps[TABLE_SIZE];
DstJump*	gCurrDestJump;
DstJump*	gBoot;
u32         gDstJumpsCount;
*/
void markUse		(u32 address, int write) {
	int usage = AdressToMode(address);
	gCurrBlock->mode |= usage;
}

int allocBlock() {
	return gBlockCount++;
}

int findBlock(u32 adr) {
	for (int n=0; n < gBlockCount; n++) {
		if ((adr >= gBlocks[n].start) && (adr <= gBlocks[n].end) ) {
			return n;
		}
	}
	return -1;
}

Link* allocLink(u32 from) {
	Link* pl = &gLinks[gLinkCount++];
	pl->mode = 0;
	pl->next = gLinksFrom[from];
	gLinksFrom[from] = pl;
	return pl;
}

void ERRORFLOW(const char* msg) {
	// testGraphVizFile(); // Dump on error.
	printf(msg);
	while (1) {
	}
}

void InitExecFlow	() {
	// Use to transform search from O(n) -> O(1)
	for (int n=0; n < TABLE_SIZE; n++) {
		gExecuted[n] = NULL;
	}

	for (int n=0; n < TABLE_SIZE; n++) {
		gLinksFrom[n] = NULL;
	}

	gBlockCount = 0;
	gLinkCount  = 0;
	int NMI = allocBlock();
	Block* pBlk = &gBlocks[NMI];
	pBlk->start	= 0xFFFFFFFF;
	pBlk->end	= 0xFFFFFFFF;
	int IRQ = allocBlock();
	pBlk = &gBlocks[IRQ];
	pBlk->start	= 0xFFFFFFFE;
	pBlk->end	= 0xFFFFFFFE;
}

int allocBlockAdr(u32 adrStart) {
	int blk = allocBlock();
	Block* pBlk = &gBlocks[blk];
	pBlk->selfID = blk;
	pBlk->start = adrStart;
	pBlk->end   = adrStart;
	pBlk->terminateRTS = false;
	pBlk->terminateRTI = false;
	pBlk->mode  = 0;
	gCurrBlock  = pBlk;
	return blk;
}

void ResetExecFlow	(u32 adr) {
	if (gInit == false) {
		InitExecFlow();
		gInit = true;
		allocBlockAdr(adr);
	}
}

void PatchBeforeOpcode(u32 src) {
	if (gExecuted[src]==NULL) {
		gExecuted[src] = gCurrBlock;
	} else if (gExecuted[src]!=gCurrBlock) {
		ERRORFLOW("WALK TWICE SAME OPCODE BUT DIFFERENT BLOCK !");
	}
}

bool existLink(u32 from, u32 to) {
	Link* pLink = gLinksFrom[from];
	while (pLink) {
		if (pLink->blockDst == to) {
			return true;
		}
		pLink = pLink->next;
	}

	return false;
}

void VerifyBlockConnectivity(u32 codePos) {
	Block* pBlk = gExecuted[codePos];
	if ((gCurrBlock != pBlk) && (pBlk != NULL)) {
		// Move to another known block without jumps...
		if (codePos == pBlk->start) {
			if (!existLink(gCurrBlock->selfID,pBlk->selfID)) {	// TODO : for now costly lookup...
				Link* newLink = allocLink(gCurrBlock->selfID);
				newLink->blockSrc	= gCurrBlock->selfID;
				newLink->blockDst	= pBlk->selfID;
			}
			gCurrBlock = pBlk;
		} else {
			ERRORFLOW("CHANGE BLOCK WITHOUT JUMP BUT NOT AT BLOCK BEGINNING ?");
		}
	} // else already walking the same block again, or unknown area...
}

int jmpCount = 0;

void Block::updateEnd(u32 adr) {
	if (this->end < adr) {
		this->end = adr;
	}

	if (this->end < this->start) {
		ERRORFLOW("BLOCK END BEFORE BLOCK START !!!");
	}
}

void JumpRTS		(u32 rtsAdr,u32 retAdr) {
	gCurrBlock->terminateRTS = true;
	gCurrBlock->updateEnd(rtsAdr-1);

	int blockFound = findBlock(retAdr-1); // Rollback inside the JSR / JSL caller to be sure to be inside the block.
	// Start again, without split...
	if (blockFound < 0) {
		blockFound = allocBlockAdr(retAdr);
		gCurrBlock = &gBlocks[blockFound];
	} else {
		gCurrBlock = &gBlocks[blockFound];
	}
}

void JumpIRQ		(u32 src, u32 dst) {
	gCurrBlock->updateEnd(src-1);

	// Jump to IRQ
	gCurrBlock = &gBlocks[1];
	Jump(0xFFFFFFE, dst,false,false);
}

void JumpRTI (u32 src, u32 dst) {
	// Update current block position
	gCurrBlock->updateEnd(src-1);
	gCurrBlock->terminateRTI = true;

	int blkID = findBlock(dst-1); // Adr of block including JSR
	if (blkID == -1) {
		// RTI to unexecuted adress ??? Possible !!! Somebody is patching the stack result here...
		int blockFound = allocBlockAdr(dst);
		gCurrBlock = &gBlocks[blockFound];
	} else {
		gCurrBlock = &gBlocks[blkID];
	}
}

void JumpNMI		(u32 src, u32 dst) {
	gCurrBlock->updateEnd(src-1);
	gCurrBlock = &gBlocks[0];
	Jump(0xFFFFFFF, dst,false,false);
}

void Jump			(u32 src, u32 dst, bool cond, bool subRoutine) {
	bool change = false;
	// Update block end.
	gCurrBlock->updateEnd(src-1);

	Link* jumpLink = NULL;
	int blockFound = findBlock(dst);
	if (blockFound >= 0) {
		Block* pBlk = &gBlocks[blockFound];
		if (pBlk->start != dst) {
			u32 endSplit = pBlk->end;

			// Block split.
			blockFound = allocBlockAdr(dst); // Warning gCurrBlock updated.
			Block* splitPost = &gBlocks[blockFound];
			splitPost->end	= endSplit;
			splitPost->updateEnd(splitPost->end);

			pBlk->end		= dst-1;
			pBlk->updateEnd(pBlk->end);

			// gCurrBlock is now splitPost.

			// split all link
			for (int n=0; n < gLinkCount; n++) {
				Link* pLnk = &gLinks[n];
				if (pLnk->blockSrc == pBlk->selfID) { pLnk->blockSrc = splitPost->selfID; }
			}

			// Add link between splitted block.
			Link* newLink = allocLink(pBlk->selfID);
			newLink->blockSrc	= pBlk->selfID;
			newLink->blockDst	= splitPost->selfID;
			newLink->mode		= 4;

			// Add link for the jump itself.
			jumpLink = allocLink(gCurrBlock->selfID);
			jumpLink->blockSrc	= gCurrBlock->selfID;
			jumpLink->blockDst  = blockFound;

			for (int n=splitPost->start; n <= splitPost->end; n++) {
				if (gExecuted[n]) {
					gExecuted[n] = splitPost;
				}
			} 
			change = true;
		} else {
			if (!existLink(gCurrBlock->selfID, pBlk->selfID)) {
				jumpLink = allocLink(gCurrBlock->selfID);
				jumpLink->blockSrc	= gCurrBlock->selfID;
				jumpLink->blockDst  = pBlk->selfID;
				change = true;
			}
			gCurrBlock = pBlk;
		}
	} else {
		// Jump to new block.
		u32 oldBlock = gCurrBlock->selfID;
		blockFound = allocBlockAdr(dst);
		jumpLink = allocLink(oldBlock);
		jumpLink->blockSrc	= oldBlock;
		jumpLink->blockDst  = blockFound;
		change = true;
	}

	if (jumpLink) {
		jumpLink->mode |= (cond ? 1 : 0) | (subRoutine ? 2 : 0);
	}
	
	jmpCount++;
//	if (change) { testGraphVizFile(); }
}

// TODO : Cartridge boot strap (gCurrDestJump setup)

// BG, mode
// VRAM
// CPU
// DMA/HDMA
// JOYSTICK
void writeVizgraph(FILE* f) {
	fprintf(f, "digraph {\n");

	// All SRC->DST connection (at end of segment)
	bool hasStart = false;
	int prevDst   = -1;
	for (int n=0; n < gBlockCount; n++) {
		Block* dst = &gBlocks[n];
		// Reset bit 31 and 30
		dst->mode &= 0x3FFFFFFF;
	}

	for (int n=0; n < gLinkCount; n++) {
		Link* pLink = &gLinks[n];
		Block* src = &gBlocks[pLink->blockSrc];
		Block* dst = &gBlocks[pLink->blockDst];
		fprintf(f, "\tAdr%x_%x -> Adr%x_%x",src->start,src->end,dst->start,dst->end);

		if (pLink->mode) {
			fprintf(f, "[");
		}

		if (pLink->mode & 4) {
			fprintf(f, "style=dotted");
			if (pLink->mode & ~4) {
				fprintf(f, ",");
			}
		}

		switch (pLink->mode) {
		case 0:
			break;
		case 1:
			fprintf(f, "color=yellow");
			break;
		case 2:
			fprintf(f, "color=blue");
			break;
		case 3:
			fprintf(f, "color=red,penwidth=3.0");
			break;
		}

		if (pLink->mode) {
			fprintf(f, "]");
		}

		fprintf(f, ";\n");

		if (dst->mode && ((dst->mode & 0x80000000)==0)) {
			dst->mode |= 0x80000000;
			char buff[1000];
			
			char* r = dst->mode & 1 ? "FF" : "00"; // ppu
			char* g = dst->mode & 2 ? "FF" : "00"; // apu
			char* b = dst->mode & 4 ? "FF" : "00"; // CPU / DMA

			sprintf(buff,"%s %s %s",r,g,b);

			fprintf(f, "\tAdr%x_%x [shape=box,style=filled,color=\"#%s\"];\n",dst->start,dst->end,buff);

		}

		if (dst->terminateRTI || dst->terminateRTS) {
			// Trick to do not draw the RTS return multiple times.
			if ((dst->mode & 0x40000000)==0) {
				dst->mode |= 0x40000000;
				fprintf(f, "\tAdr%x_%x -> Adr%xRet;\n",dst->start,dst->end,dst->end);
				fprintf(f, "\tAdr%xRet[shape=box,label=\"%s\"];\n",dst->end,dst->terminateRTS ? "RTS" : "RTI");
			}
		}
	}

	fprintf(f, "}\n");
}

void exportGraphVizFile() {
	FILE* f = fopen("graph_log_snes9x.dot","w");
	writeVizgraph(f);
	fclose(f);
}

void loadGraph() {
	InitExecFlow();

	FILE* f;
	f = fopen("graph_log_snes9x.bin","rb");

	fread(&gBlockCount,sizeof(u32),1,f);
	fread(&gLinkCount ,sizeof(u32),1,f);

	fread(gLinks,sizeof(Link),gLinkCount,f);
	for (int n=0; n < gLinkCount; n++) {
		gLinks[n].next = NULL;
	}

	fread(gBlocks, sizeof(Block), gBlockCount, f);

	int readCount;
	fread(&readCount, sizeof(u32),1,f);
	for (int n=0; n < readCount; n++) {
		u32 adr;
		u32 idx; 
		fread(&adr, sizeof(u32), 1,f);
		fread(&idx, sizeof(u32), 1,f);
		gExecuted[adr] = &gBlocks[idx];
	}

	// Create Link list...
	for (int n=0; n < gLinkCount; n++) {
		gLinks[n].next = gLinksFrom[gLinks[n].blockSrc];
		gLinksFrom[gLinks[n].blockSrc] = &gLinks[n];
	}

	fclose(f);
}

void saveGraph() {
	FILE* f;
	f = fopen("graph_log_snes9x.bin","wb");

	// 0. Block Count + Link Count
	fwrite(&gBlockCount,sizeof(u32),1,f);
	fwrite(&gLinkCount, sizeof(u32),1,f);

	// 1. Save link file (src,dst,mode), NOT NEXT.
	fwrite(gLinks,sizeof(Link),gLinkCount,f);

	// 3. Save blocks as is
	fwrite(gBlocks,sizeof(Block),gBlockCount,f);

	// 4. Save gExecuted using integer instead of pointers.
	
	// 4.1 Count
	u32 counter = 0;
	for (int n=0; n < TABLE_SIZE; n++) {
		if (gExecuted[n]) { counter++; }
	}
	fwrite(&counter, sizeof(u32),1,f);

	// 4.2 Array
	for (int n=0; n < TABLE_SIZE; n++) {
		if (gExecuted[n]) {
			fwrite(&n, sizeof(u32),1,f);						// Adr
			fwrite(&gExecuted[n]->selfID, sizeof(u32),1,f);		// Ptr
		}
	}

	fclose(f);
}

