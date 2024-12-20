// Copyright 2022 The Forgotten Server Authors. All rights reserved.
// Use of this source code is governed by the GPL-2.0 License that can be found in the LICENSE file.

#ifndef FS_ENUMS_H_003445999FEE4A67BCECBE918B0124CE
#define FS_ENUMS_H_003445999FEE4A67BCECBE918B0124CE

enum RuleViolationType_t : uint8_t {
	REPORT_TYPE_NAME = 0,
	REPORT_TYPE_STATEMENT = 1,
	REPORT_TYPE_BOT = 2
};

enum RuleViolationReasons_t : uint8_t {
	REPORT_REASON_NAMEINAPPROPRIATE = 0,
	REPORT_REASON_NAMEPOORFORMATTED = 1,
	REPORT_REASON_NAMEADVERTISING = 2,
	REPORT_REASON_NAMEUNFITTING = 3,
	REPORT_REASON_NAMERULEVIOLATION = 4,
	REPORT_REASON_INSULTINGSTATEMENT = 5,
	REPORT_REASON_SPAMMING = 6,
	REPORT_REASON_ADVERTISINGSTATEMENT = 7,
	REPORT_REASON_UNFITTINGSTATEMENT = 8,
	REPORT_REASON_LANGUAGESTATEMENT = 9,
	REPORT_REASON_DISCLOSURE = 10,
	REPORT_REASON_RULEVIOLATION = 11,
	REPORT_REASON_STATEMENT_BUGABUSE = 12,
	REPORT_REASON_UNOFFICIALSOFTWARE = 13,
	REPORT_REASON_PRETENDING = 14,
	REPORT_REASON_HARASSINGOWNERS = 15,
	REPORT_REASON_FALSEINFO = 16,
	REPORT_REASON_ACCOUNTSHARING = 17,
	REPORT_REASON_STEALINGDATA = 18,
	REPORT_REASON_SERVICEATTACKING = 19,
	REPORT_REASON_SERVICEAGREEMENT = 20
};

enum BugReportType_t : uint8_t {
	BUG_CATEGORY_MAP = 0,
	BUG_CATEGORY_TYPO = 1,
	BUG_CATEGORY_TECHNICAL = 2,
	BUG_CATEGORY_OTHER = 3
};

enum ThreadState {
	THREAD_STATE_RUNNING,
	THREAD_STATE_CLOSING,
	THREAD_STATE_TERMINATED,
};

enum itemAttrTypes : uint32_t {
	ITEM_ATTRIBUTE_NONE,

	ITEM_ATTRIBUTE_ACTIONID = 1 << 0,
	ITEM_ATTRIBUTE_UNIQUEID = 1 << 1,
	ITEM_ATTRIBUTE_DESCRIPTION = 1 << 2,
	ITEM_ATTRIBUTE_TEXT = 1 << 3,
	ITEM_ATTRIBUTE_DATE = 1 << 4,
	ITEM_ATTRIBUTE_WRITER = 1 << 5,
	ITEM_ATTRIBUTE_NAME = 1 << 6,
	ITEM_ATTRIBUTE_ARTICLE = 1 << 7,
	ITEM_ATTRIBUTE_PLURALNAME = 1 << 8,
	ITEM_ATTRIBUTE_WEIGHT = 1 << 9,
	ITEM_ATTRIBUTE_ATTACK = 1 << 10,
	ITEM_ATTRIBUTE_DEFENSE = 1 << 11,
	ITEM_ATTRIBUTE_EXTRADEFENSE = 1 << 12,
	ITEM_ATTRIBUTE_ARMOR = 1 << 13,
	ITEM_ATTRIBUTE_HITCHANCE = 1 << 14,
	ITEM_ATTRIBUTE_SHOOTRANGE = 1 << 15,
	ITEM_ATTRIBUTE_OWNER = 1 << 16,
	ITEM_ATTRIBUTE_DURATION = 1 << 17,
	ITEM_ATTRIBUTE_DECAYSTATE = 1 << 18,
	ITEM_ATTRIBUTE_CORPSEOWNER = 1 << 19,
	ITEM_ATTRIBUTE_CHARGES = 1 << 20,
	ITEM_ATTRIBUTE_FLUIDTYPE = 1 << 21,
	ITEM_ATTRIBUTE_DOORID = 1 << 22,
	ITEM_ATTRIBUTE_DECAYTO = 1 << 23,
	ITEM_ATTRIBUTE_WRAPID = 1 << 24,
	ITEM_ATTRIBUTE_STOREITEM = 1 << 25,
	ITEM_ATTRIBUTE_ATTACK_SPEED = 1 << 26,
	ITEM_ATTRIBUTE_CORPSENAME = 1 << 27,
	ITEM_ATTRIBUTE_POKEMONCORPSELEVEL = 1 << 28,
	ITEM_ATTRIBUTE_POKEMONCORPSEGENDER = 1 << 29,
	ITEM_ATTRIBUTE_POKEMONCORPSENATURE = 1 << 30,

	ITEM_ATTRIBUTE_CUSTOM = 1U << 31
};

enum VipStatus_t : uint8_t {
	VIPSTATUS_OFFLINE = 0,
	VIPSTATUS_ONLINE = 1,
	VIPSTATUS_PENDING = 2
};

enum MarketAction_t {
	MARKETACTION_BUY = 0,
	MARKETACTION_SELL = 1,
};

enum MarketRequest_t {
	MARKETREQUEST_OWN_OFFERS = 0xFFFE,
	MARKETREQUEST_OWN_HISTORY = 0xFFFF,
};

enum MarketOfferState_t {
	OFFERSTATE_ACTIVE = 0,
	OFFERSTATE_CANCELLED = 1,
	OFFERSTATE_EXPIRED = 2,
	OFFERSTATE_ACCEPTED = 3,

	OFFERSTATE_ACCEPTEDEX = 255,
};

enum ChannelEvent_t : uint8_t {
	CHANNELEVENT_JOIN = 0,
	CHANNELEVENT_LEAVE = 1,
	CHANNELEVENT_INVITE = 2,
	CHANNELEVENT_EXCLUDE = 3,
};

enum CreatureType_t : uint8_t {
	CREATURETYPE_PLAYER = 0,
	CREATURETYPE_POKEMON = 1,
	CREATURETYPE_NPC = 2,
	CREATURETYPE_SUMMON_OWN = 3,
	CREATURETYPE_SUMMON_OTHERS = 4,
};

enum OperatingSystem_t : uint8_t {
	CLIENTOS_NONE = 0,

	CLIENTOS_LINUX = 1,
	CLIENTOS_WINDOWS = 2,
	CLIENTOS_FLASH = 3,

	CLIENTOS_OTCLIENT_LINUX = 10,
	CLIENTOS_OTCLIENT_WINDOWS = 11,
	CLIENTOS_OTCLIENT_MAC = 12,
};

enum SpellGroup_t : uint8_t {
	SPELLGROUP_NONE = 0,
	SPELLGROUP_ATTACK = 1,
	SPELLGROUP_HEALING = 2,
	SPELLGROUP_SUPPORT = 3,
	SPELLGROUP_SPECIAL = 4,
};

enum SpellType_t : uint8_t {
	SPELL_UNDEFINED = 0,
	SPELL_INSTANT = 1,
};

enum AccountType_t : uint8_t {
	ACCOUNT_TYPE_NORMAL = 1,
	ACCOUNT_TYPE_TUTOR = 2,
	ACCOUNT_TYPE_SENIORTUTOR = 3,
	ACCOUNT_TYPE_GAMEMASTER = 4,
	ACCOUNT_TYPE_COMMUNITYMANAGER = 5,
	ACCOUNT_TYPE_GOD = 6
};

enum PokemonType_t : uint16_t {
	POKEMON_TYPE_NONE,
	POKEMON_TYPE_POISON,
	POKEMON_TYPE_NORMAL,
	POKEMON_TYPE_BUG,
	POKEMON_TYPE_FIRE,
	POKEMON_TYPE_ELETRIC,
	POKEMON_TYPE_FAIRY,
	POKEMON_TYPE_GROUND,
	POKEMON_TYPE_ROCK,
	POKEMON_TYPE_ICE,
	POKEMON_TYPE_WATER,
	POKEMON_TYPE_FLYING,
	POKEMON_TYPE_GRASS,
	POKEMON_TYPE_FIGHTING,
	POKEMON_TYPE_PSYCHIC,
	POKEMON_TYPE_STEEL,
	POKEMON_TYPE_GHOST,
	POKEMON_TYPE_DRAGON,
	POKEMON_TYPE_LAST = POKEMON_TYPE_DRAGON,
};

enum CombatType_t : uint32_t {
	COMBAT_NONE = 0,

	COMBAT_NORMALDAMAGE = 1 << 0,
	COMBAT_ELETRICDAMAGE = 1 << 1,
	COMBAT_ROCKDAMAGE = 1 << 2,
	COMBAT_FIREDAMAGE = 1 << 3,
	COMBAT_GRASSDAMAGE = 1 << 4,
	COMBAT_POISONDAMAGE = 1 << 5,
	COMBAT_HEALING = 1 << 7,
	COMBAT_BUGDAMAGE = 1 << 8,
	COMBAT_ICEDAMAGE = 1 << 9,
	COMBAT_PSYCHICDAMAGE = 1 << 10,
	COMBAT_WATERDAMAGE = 1 << 11,
	COMBAT_FAIRYDAMAGE = 1 << 12,
	COMBAT_FIGHTINGDAMAGE = 1 << 13,
	COMBAT_STEELDAMAGE = 1 << 14,
	COMBAT_FLYINGDAMAGE = 1 << 15,
	COMBAT_DARKDAMAGE = 1 << 16,
	COMBAT_GHOSTDAMAGE = 1 << 17,
	COMBAT_DRAGONDAMAGE = 1 << 18,
	COMBAT_GROUNDDAMAGE = 1 << 19,

	COMBAT_COUNT = 20
};

enum CombatParam_t {
	COMBAT_PARAM_TYPE,
	COMBAT_PARAM_EFFECT,
	COMBAT_PARAM_DISTANCEEFFECT,
	COMBAT_PARAM_BLOCKSHIELD,
	COMBAT_PARAM_BLOCKARMOR,
	COMBAT_PARAM_TARGETCASTERORTOPMOST,
	COMBAT_PARAM_CREATEITEM,
	COMBAT_PARAM_AGGRESSIVE,
	COMBAT_PARAM_DISPEL,
	COMBAT_PARAM_USECHARGES,
	COMBAT_PARAM_POWER,
};

enum CallBackParam_t {
	CALLBACK_PARAM_LEVELMAGICVALUE,
	CALLBACK_PARAM_SKILLVALUE,
	CALLBACK_PARAM_TARGETTILE,
	CALLBACK_PARAM_TARGETCREATURE,
};

enum ConditionParam_t {
	CONDITION_PARAM_OWNER = 1,
	CONDITION_PARAM_TICKS = 2,
	//CONDITION_PARAM_OUTFIT = 3,
	CONDITION_PARAM_HEALTHGAIN = 4,
	CONDITION_PARAM_HEALTHTICKS = 5,
	CONDITION_PARAM_DELAYED = 8,
	CONDITION_PARAM_SPEED = 9,
	CONDITION_PARAM_LIGHT_LEVEL = 10,
	CONDITION_PARAM_LIGHT_COLOR = 11,
	CONDITION_PARAM_MINVALUE = 14,
	CONDITION_PARAM_MAXVALUE = 15,
	CONDITION_PARAM_STARTVALUE = 16,
	CONDITION_PARAM_TICKINTERVAL = 17,
	CONDITION_PARAM_FORCEUPDATE = 18,
	CONDITION_PARAM_SKILL_FISHING = 26,
	CONDITION_PARAM_STAT_MAXHITPOINTS = 27,
	CONDITION_PARAM_STAT_MAXHITPOINTSPERCENT = 31,
	CONDITION_PARAM_PERIODICDAMAGE = 35,
	CONDITION_PARAM_SKILL_FISHINGPERCENT = 43,
	CONDITION_PARAM_BUFF_SPELL = 44,
	CONDITION_PARAM_SUBID = 45,
	CONDITION_PARAM_FIELD = 46,
	CONDITION_PARAM_DISABLE_DEFENSE = 47,
	// 48, 49, 50 and 51 unused
	CONDITION_PARAM_AGGRESSIVE = 54,
	CONDITION_PARAM_DRUNKENNESS = 55,
};

enum BlockType_t : uint8_t {
	BLOCK_NONE,
	BLOCK_DEFENSE,
	BLOCK_ARMOR,
	BLOCK_IMMUNITY
};

enum skills_t : uint8_t {
	SKILL_FISHING = 6,
	SKILL_LEVEL = 8,

	SKILL_FIRST = SKILL_FISHING,
	SKILL_LAST = SKILL_FISHING
};

enum stats_t {
	STAT_MAXHITPOINTS,

	STAT_FIRST = STAT_MAXHITPOINTS,
	STAT_LAST = STAT_MAXHITPOINTS
};

enum formulaType_t {
	COMBAT_FORMULA_UNDEFINED,
	COMBAT_FORMULA_LEVELMAGIC,
	COMBAT_FORMULA_SKILL,
	COMBAT_FORMULA_DAMAGE,
};

enum ConditionType_t {
	CONDITION_NONE,

	CONDITION_POISON = 1 << 0,
	CONDITION_FIRE = 1 << 1,
	CONDITION_ENERGY = 1 << 2,
	CONDITION_BLEEDING = 1 << 3,
	CONDITION_HASTE = 1 << 4,
	CONDITION_PARALYZE = 1 << 5,
	CONDITION_OUTFIT = 1 << 6,
	CONDITION_INVISIBLE = 1 << 7,
	CONDITION_LIGHT = 1 << 8,
	CONDITION_INFIGHT = 1 << 10,
	CONDITION_DRUNK = 1 << 11,
	// unused 1 << 12,
	CONDITION_REGENERATION = 1 << 13,
	CONDITION_DROWN = 1 << 14,
	CONDITION_MUTED = 1 << 15,
	CONDITION_CHANNELMUTEDTICKS = 1 << 16,
	CONDITION_YELLTICKS = 1 << 17,
	CONDITION_ATTRIBUTES = 1 << 18,
	CONDITION_FREEZING = 1 << 19,
	CONDITION_DAZZLED = 1 << 20,
	CONDITION_CURSED = 1 << 21,
	CONDITION_EXHAUST_COMBAT = 1 << 22, // unused
	CONDITION_EXHAUST_HEAL = 1 << 23, // unused
	CONDITION_PACIFIED = 1 << 24,
	CONDITION_SPELLCOOLDOWN = 1 << 25,
	CONDITION_SPELLGROUPCOOLDOWN = 1 << 26,
};

enum ConditionId_t : int8_t {
	CONDITIONID_DEFAULT = -1,
	CONDITIONID_COMBAT,
	CONDITIONID_HEAD,
	CONDITIONID_NECKLACE,
	CONDITIONID_BACKPACK,
	CONDITIONID_ARMOR,
	CONDITIONID_RIGHT,
	CONDITIONID_LEFT,
	CONDITIONID_LEGS,
	CONDITIONID_FEET,
	CONDITIONID_RING,
	CONDITIONID_AMMO,
};

enum PlayerSex_t : uint8_t {
	PLAYERSEX_FEMALE = 0,
	PLAYERSEX_MALE = 1,

	PLAYERSEX_LAST = PLAYERSEX_MALE
};

enum Profession_t : uint16_t {
	PROFESSION_NONE = 0
};

enum ReturnValue {
	RETURNVALUE_NOERROR,
	RETURNVALUE_NOTPOSSIBLE,
	RETURNVALUE_NOTENOUGHROOM,
	RETURNVALUE_PLAYERISPZLOCKED,
	RETURNVALUE_PLAYERISNOTINVITED,
	RETURNVALUE_CANNOTTHROW,
	RETURNVALUE_THEREISNOWAY,
	RETURNVALUE_DESTINATIONOUTOFREACH,
	RETURNVALUE_CREATUREBLOCK,
	RETURNVALUE_NOTMOVEABLE,
	RETURNVALUE_DROPTWOHANDEDITEM,
	RETURNVALUE_BOTHHANDSNEEDTOBEFREE,
	RETURNVALUE_NEEDEXCHANGE,
	RETURNVALUE_CANNOTBEDRESSED,
	RETURNVALUE_PUTTHISOBJECTINYOURHAND,
	RETURNVALUE_PUTTHISOBJECTINBOTHHANDS,
	RETURNVALUE_TOOFARAWAY,
	RETURNVALUE_FIRSTGODOWNSTAIRS,
	RETURNVALUE_FIRSTGOUPSTAIRS,
	RETURNVALUE_CONTAINERNOTENOUGHROOM,
	RETURNVALUE_NOTENOUGHCAPACITY,
	RETURNVALUE_CANNOTPICKUP,
	RETURNVALUE_THISISIMPOSSIBLE,
	RETURNVALUE_DEPOTISFULL,
	RETURNVALUE_CREATUREDOESNOTEXIST,
	RETURNVALUE_CANNOTUSETHISOBJECT,
	RETURNVALUE_PLAYERWITHTHISNAMEISNOTONLINE,
	RETURNVALUE_YOUAREALREADYTRADING,
	RETURNVALUE_THISPLAYERISALREADYTRADING,
	RETURNVALUE_YOUMAYNOTLOGOUTDURINGAFIGHT,
	RETURNVALUE_DIRECTPLAYERSHOOT,
	RETURNVALUE_NOTENOUGHLEVEL,
	RETURNVALUE_YOUAREEXHAUSTED,
	RETURNVALUE_YOUCANNOTUSEOBJECTSTHATFAST,
	RETURNVALUE_PLAYERISNOTREACHABLE,
	RETURNVALUE_ACTIONNOTPERMITTEDINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISPLAYER,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONWHILEINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISCREATURE,
	RETURNVALUE_YOUCANONLYUSEITONCREATURES,
	RETURNVALUE_CREATUREISNOTREACHABLE,
	RETURNVALUE_TURNSECUREMODETOATTACKUNMARKEDPLAYERS,
	RETURNVALUE_YOUNEEDPREMIUMACCOUNT,
	RETURNVALUE_YOUNEEDTOLEARNTHISSPELL,
	RETURNVALUE_YOURPROFESSIONCANNOTUSETHISSPELL,
	RETURNVALUE_PLAYERISPZLOCKEDLEAVEPVPZONE,
	RETURNVALUE_PLAYERISPZLOCKEDENTERPVPZONE,
	RETURNVALUE_ACTIONNOTPERMITTEDINANOPVPZONE,
	RETURNVALUE_YOUCANNOTLOGOUTHERE,
	RETURNVALUE_YOUNEEDAMAGICITEMTOCASTSPELL,
	RETURNVALUE_CANNOTCONJUREITEMHERE,
	RETURNVALUE_YOUNEEDTOSPLITYOURSPEARS,
	RETURNVALUE_NAMEISTOOAMBIGUOUS,
	RETURNVALUE_NOPARTYMEMBERSINRANGE,
	RETURNVALUE_YOUARENOTTHEOWNER,
	RETURNVALUE_NOSUCHRAIDEXISTS,
	RETURNVALUE_ANOTHERRAIDISALREADYEXECUTING,
	RETURNVALUE_TRADEPLAYERFARAWAY,
	RETURNVALUE_YOUDONTOWNTHISHOUSE,
	RETURNVALUE_TRADEPLAYERALREADYOWNSAHOUSE,
	RETURNVALUE_TRADEPLAYERHIGHESTBIDDER,
	RETURNVALUE_YOUCANNOTTRADETHISHOUSE,
	RETURNVALUE_YOUDONTHAVEREQUIREDPROFESSION,
	RETURNVALUE_CANNOTMOVEITEMISNOTSTOREITEM,
	RETURNVALUE_ITEMCANNOTBEMOVEDTHERE,
	RETURNVALUE_YOUCANNOTUSETHISBED,
	RETURNVALUE_POKEMONCANNOTEVOLVE,
	RETURNVALUE_POKEMONCANNOTEVOLVEWITHTHISSTONE,
	RETURNVALUE_POKEMONEVOLUTIONNOTFOUND,
	RETURNVALUE_NOLEVELTOEVOLVEPOKEMON,
	RETURNVALUE_MAXPOKEMONINBAG,
};

enum SpeechBubble_t
{
	SPEECHBUBBLE_NONE = 0,
	SPEECHBUBBLE_NORMAL = 1,
	SPEECHBUBBLE_TRADE = 2,
	SPEECHBUBBLE_QUEST = 3,
	SPEECHBUBBLE_QUESTTRADER = 4,
};

enum MapMark_t
{
	MAPMARK_TICK = 0,
	MAPMARK_QUESTION = 1,
	MAPMARK_EXCLAMATION = 2,
	MAPMARK_STAR = 3,
	MAPMARK_CROSS = 4,
	MAPMARK_POKEMONCENTER = 5,
	MAPMARK_KISS = 6,
	MAPMARK_SHOVEL = 7,
	MAPMARK_SWORD = 8,
	MAPMARK_FLAG = 9,
	MAPMARK_LOCK = 10,
	MAPMARK_BAG = 11,
	MAPMARK_SKULL = 12,
	MAPMARK_DOLLAR = 13,
	MAPMARK_REDNORTH = 14,
	MAPMARK_REDSOUTH = 15,
	MAPMARK_REDEAST = 16,
	MAPMARK_REDWEST = 17,
	MAPMARK_GREENNORTH = 18,
	MAPMARK_GREENSOUTH = 19,
};

enum PokemonGender_t : uint8_t
{
	POKEMON_GENDER_UNDEFINED = 0,
	POKEMON_GENDER_MALE = 1,
	POKEMON_GENDER_FEMALE = 2,
	POKEMON_GENDER_LAST = POKEMON_GENDER_FEMALE
};

enum PokemonNature_t : uint8_t
{
	POKEMON_NATURE_HARDY = 0,
	POKEMON_NATURE_LONELY = 1,
	POKEMON_NATURE_ADAMANT = 2,
	POKEMON_NATURE_NAUGHTY = 3,
	POKEMON_NATURE_BRAVE = 4,
	POKEMON_NATURE_BOLD = 5,
	POKEMON_NATURE_DOCILE = 6,
	POKEMON_NATURE_IMPISH = 7,
	POKEMON_NATURE_LAX = 8,
	POKEMON_NATURE_RELAXED = 9,
	POKEMON_NATURE_MODEST = 10,
	POKEMON_NATURE_MILD = 11,
	POKEMON_NATURE_BASHFUL = 12,
	POKEMON_NATURE_RASH = 13,
	POKEMON_NATURE_QUIET = 14,
	POKEMON_NATURE_CALM = 15,
	POKEMON_NATURE_GENTLE = 16,
	POKEMON_NATURE_CAREFUL = 17,
	POKEMON_NATURE_QUIRKY = 18,
	POKEMON_NATURE_SASSY = 19,
	POKEMON_NATURE_TIMID = 20,
	POKEMON_NATURE_HASTY = 21,
	POKEMON_NATURE_JOLLY = 22,
	POKEMON_NATURE_NAIVE = 23,
	POKEMON_NATURE_SERIOUS = 24,
	POKEMON_NATURE_LAST = POKEMON_NATURE_SERIOUS
};

enum PokeballState_t : uint8_t
{
	POKEBALL_STATE_OFF = 0,
	POKEBALL_STATE_ON = 1,
	POKEBALL_STATE_FAINTED = 2
};

struct Outfit_t {
	uint16_t lookType = 0;
	uint16_t lookTypeEx = 0;
	uint16_t lookMount = 0;
	uint8_t lookHead = 0;
	uint8_t lookBody = 0;
	uint8_t lookLegs = 0;
	uint8_t lookFeet = 0;
	uint8_t lookAddons = 0;
};

struct PokemonValues {
	uint16_t health = 0;
	uint16_t attack = 0;
	uint16_t defense = 0;
	uint16_t speed = 0;
	uint16_t specialAttack = 0;
	uint16_t specialDefense = 0;
};

struct PokemonNatureValues {
	int8_t attack = 0;
	int8_t defense = 0;
	int8_t speed = 0;
	int8_t specialAttack = 0;
	int8_t specialDefense = 0;
};

struct LightInfo {
	uint8_t level = 0;
	uint8_t color = 0;
	constexpr LightInfo() = default;
	constexpr LightInfo(uint8_t level, uint8_t color) : level(level), color(color) {}
};

struct ShopInfo {
	uint16_t itemId = 0;
	int32_t subType = 1;
	uint32_t buyPrice = 0;
	uint32_t sellPrice = 0;
	std::string realName = "";

	ShopInfo() = default;
	ShopInfo(uint16_t itemId, int32_t subType = 0, uint32_t buyPrice = 0, uint32_t sellPrice = 0, std::string realName = "")
		: itemId(itemId), subType(subType), buyPrice(buyPrice), sellPrice(sellPrice), realName(std::move(realName)) {}
};

struct MarketOffer {
	uint32_t price;
	uint32_t timestamp;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	std::string playerName;
};

struct MarketOfferEx {
	MarketOfferEx() = default;
	MarketOfferEx(MarketOfferEx&& other) :
		id(other.id), playerId(other.playerId), timestamp(other.timestamp), price(other.price),
		amount(other.amount), counter(other.counter), itemId(other.itemId), type(other.type),
		playerName(std::move(other.playerName)) {}

	uint32_t id;
	uint32_t playerId;
	uint32_t timestamp;
	uint32_t price;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	MarketAction_t type;
	std::string playerName;
};

struct HistoryMarketOffer {
	uint32_t timestamp;
	uint32_t price;
	uint16_t itemId;
	uint16_t amount;
	MarketOfferState_t state;
};

struct MarketStatistics {
	uint32_t numTransactions = 0;
	uint32_t highestPrice = 0;
	uint64_t totalPrice = 0;
	uint32_t lowestPrice = 0;
};

struct ModalWindow
{
	std::list<std::pair<std::string, uint8_t>> buttons, choices;
	std::string title, message;
	uint32_t id;
	uint8_t defaultEnterButton = 0xFF, defaultEscapeButton = 0xFF;
	bool priority = false;

	ModalWindow(uint32_t id, std::string title, std::string message): title(std::move(title)), message(std::move(message)), id(id) {}
};

enum CombatOrigin
{
	ORIGIN_NONE,
	ORIGIN_CONDITION,
	ORIGIN_SPELL,
	ORIGIN_MELEE,
	ORIGIN_RANGED,
};

struct CombatDamage
{
	struct {
		CombatType_t type = COMBAT_NONE;
		int32_t value = 0;
	} primary = {}, secondary = {};

	CombatOrigin origin = ORIGIN_NONE;
	BlockType_t blockType = BLOCK_NONE;
	bool critical = false;
	bool leeched = false;
};

using MarketOfferList = std::list<MarketOffer>;
using HistoryMarketOfferList = std::list<HistoryMarketOffer>;
using ShopInfoList = std::list<ShopInfo>;

enum PokemonsEvent_t : uint8_t {
	POKEMONS_EVENT_NONE = 0,
	POKEMONS_EVENT_THINK = 1,
	POKEMONS_EVENT_APPEAR = 2,
	POKEMONS_EVENT_DISAPPEAR = 3,
	POKEMONS_EVENT_MOVE = 4,
	POKEMONS_EVENT_SAY = 5,
};

#endif
