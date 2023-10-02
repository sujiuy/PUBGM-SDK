uint64_t GNames = 0xC2B6460;
uint64_t GObject = 0xC2BF460;
ULONG64 GetGames(ULONG64 Names) {
	auto Index = (Mem->Read<uint32_t>(Names) - 100) / 3 - 1;
	auto name = Mem->Read<ULONG64>(Names + 0x8);
	if (ValidPtr(name)) return 0;
	return Mem->Read<uint64_t>(name + Index * 0x10);
}


/*
Gname = GetGames(LibUE4.so + GNames);


*/
