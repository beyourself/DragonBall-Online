#ifndef PACKET_UG__H
# define PACKET_UG__H

#include <Define.h>
#include <SharedDef.h>
#include <SharedType.h>
#include <Opcodes.h>
#include <TableAll.h>

#pragma once
#pragma pack(1)
//------------------------------------------------------------------

struct sUG_GAME_ENTER_REQ
{
	ACCOUNTID			accountId;
	CHARACTERID			charId;
	BYTE				abyAuthKey[MAX_SIZE_AUTH_KEY];
	bool				bTutorialMode;
};
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GAME_LEAVE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_AUTH_KEY_FOR_COMMUNITY_SERVER_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ENTER_WORLD)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SERVER_COMMAND)
WORD				wMessageLengthInUnicode;
WCHAR				awchCommand[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_READY_FOR_COMMUNITY_SERVER_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_READY_TO_SPAWN)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_READY)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_MOVE)
//- yoshiki : Do we use dwTimeStamp or not?
uint8_t avatar_type;
//sVECTOR3            vCurLoc;
//sVECTOR3            vCurDir;
uint32_t pos_move_x;
uint32_t pos_move_y;
uint32_t pos_move_z;
int16_t dir_move_x;
int16_t dir_move_y;
int16_t dir_move_z;
uint8_t move_type;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_AIR_MOVE)
//- yoshiki : Do we use dwTimeStamp or not?
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
uint32_t pos_move_x;
uint32_t pos_move_y;
uint32_t pos_move_z;
int16_t dir_move_x;
int16_t dir_move_y;
int16_t dir_move_z;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_AIR_MOVE_SYNC)
//- yoshiki : Do we use dwTimeStamp or not?
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
uint32_t pos_move_x;
uint32_t pos_move_y;
uint32_t pos_move_z;
int16_t dir_move_x;
int16_t dir_move_y;
int16_t dir_move_z;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_DEST_MOVE)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
sVECTOR3			vCurLoc;
sVECTOR3			vDestLoc;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_CHANGE_HEADING)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
sVECTOR3			vCurrentPosition;
sVECTOR3			vCurrentHeading;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_CHAR_MOVE_SYNC)
////	//- yoshiki : Do we use dwTimeStamp or not?
//	DWORD				dwTimeStamp;
//	BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
//	sVECTOR3			vCurLoc;
//	sVECTOR3			vCurDir;
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_CHANGE_DIRECTION_ON_FLOATING)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
sVECTOR3			vCurDir;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_FOLLOW_MOVE)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
HOBJECT				hTarget;
float				fDistance;
BYTE				byMovementReason;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_DASH_KEYBOARD)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_AIR_DASH)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_DASH_MOUSE)
//- yoshiki : Do we use dwTimeStamp or not?
DWORD				dwTimeStamp;
sVECTOR3			vDestLoc;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_JUMP)
sVECTOR3			vCurrentHeading;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_AIR_JUMP)
sVECTOR3			vCurrentHeading;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_JUMP_END)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_FALLING)
bool				bIsFalling;
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
BYTE				byMoveDirection;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TOGG_SITDOWN)
bool				bSitDown;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TOGG_FIGHTING)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
bool				bFightMode;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_CHAR_TOGG_RUNNING)
//	bool				bRunMode;
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TARGET_SELECT)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TARGET_INFO)
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TARGET_FACING)
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_ATTACK_BEGIN)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
BYTE				byType;	// ���� : �ӽ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_ATTACK_END)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
BYTE				byType;	// ���� : �ӽ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_CHARGE)
bool				bCharge; // ON/OFF
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_BLOCK_MODE)
bool				bIsOn;		// On/Off
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_TELEPORT_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_BIND_REQ)
TBLIDX				bindObjectTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_REVIVAL_REQ)
BYTE				byRevivalRequestType;		// eDBO_REVIVAL_REQUEST_TYPE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_SERVER_CHANGE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_CHANNEL_CHANGE_REQ)
SERVERCHANNELID		destServerChannelId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_EXIT_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GAME_EXIT_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_AWAY_REQ)
bool	bIsAway;		// AwayOn 1: Awayoff: 0
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_KEY_UPDATE_REQ)
BYTE	byCount;		// ���氹��
sSHORTCUT_UPDATE_DATA asData[SHORTCUT_MAX_COUNT];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_DIRECT_PLAY_ACK)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_KNOCKDOWN_RELEASE_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_SKILL_REQ)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
BYTE				bySlotIndex;
BYTE				byRpBonusType;		// eDBO_RP_BONUS_TYPE
HOBJECT				hTarget;
// If skill effect should be applied on a target character, too, the target character must be included in both byApplyTargetCount and ahApplyTarget.
BYTE				byApplyTargetCount;
HOBJECT				ahApplyTarget[MAX_NUMBER_OF_SKILL_TARGET];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_TARGET_LIST)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
										// If skill effect should be applied on a target character, too, the target character must be included in both byApplyTargetCount and ahApplyTarget.
BYTE				byApplyTargetCount;
HOBJECT				ahApplyTarget[MAX_NUMBER_OF_SKILL_TARGET];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_LEARN_REQ)
TBLIDX				skillTblidx;
END_PROTOCOL()
BEGIN_PROTOCOL(UG_SKILL_LEARN_BY_ITEM_REQ)
TBLIDX				skillTblidx;
BYTE test;
WORD test1;

END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_UPGRADE_REQ)
BYTE				bySlotIndex;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_RP_BONUS_SETTING_REQ)
BYTE				bySlotIndex;
BYTE				byRpBonusType;		// eDBO_RP_BONUS_TYPE
bool				bIsRpBonusAuto;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HTB_START_REQ)
HOBJECT				hTarget;
BYTE				bySkillSlot;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HTB_LEARN_REQ)
HOBJECT				hTrainer; // Ʈ���̳� �ڵ�
TBLIDX				skillId; // HTB set ���̺� ��ȣ
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HTB_FORWARD_REQ)
sVECTOR3			vCurLoc; // ���� ��ġ
sVECTOR2			vCurDir; // ���� ����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HTB_RP_BALL_USE_REQ)
BYTE				byRpBallCount;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUFF_DROP_REQ)
BYTE				bySourceType;		// eDBO_OBJECT_SOURCE
TBLIDX				tblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_MOVE_REQ)
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_MOVE_STACK_REQ)
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
BYTE				byStackCount;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_DELETE_REQ)
BYTE				bySrcPlace;
BYTE				bySrcPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_EQUIP_REPAIR_REQ)
HOBJECT				handle;			// NpcHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_PICK_REQ)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
HOBJECT				handle;			// ItemHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_REPAIR_REQ)
HOBJECT				handle;			// NpcHandle
BYTE				byPlace;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_USE_REQ)
HOBJECT				hTarget;
BYTE				byPlace;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_UPGRADE_REQ)
HOBJECT				handle;				// NpcHandle
BYTE				byItemPlace;		// ���׷��̵� �� �������� �����̳� ��ġ
BYTE				byItemPos;			// ���׷��̵� �� �������� ��ġ
BYTE				byStonPlace;		// ȣ�����̽��� �����̳� ��ġ
BYTE				byStonPos;			// ȣ�����̽��� ��ġ
BYTE				byPosNum;			// ���׷��̵� â�� ������ġ: (�������� ���Թ�ȣ * 10 + ȣ�����̽��潽�Թ�ȣ) 
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ITEM_IDENTIFY_REQ)
BYTE				byPlace;			// ������ Ȯ�ν��� Ȯ�� �� �������� �����̳� ��ġ
BYTE				byPos;				// �������� ������.
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_ZENNY_PICK_REQ)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
HOBJECT				handle;			// ItemHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_START_REQ)
HOBJECT				handle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_BUY_REQ)
HOBJECT				handle;
BYTE				byBuyCount;
sSHOP_BUY_CART		sBuyData[MAX_BUY_SHOPPING_CART];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_SELL_REQ)
HOBJECT				handle;
BYTE				bySellCount;
sSHOP_SELL_CART		sSellData[MAX_SELL_SHOPPING_CART]; // 3BYTE * 8 = 24
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_SKILL_BUY_REQ)
HOBJECT				hNpchandle;
BYTE				byMerchantTab;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_CREATE_REQ)
WCHAR				wszPartyName[MAX_SIZE_PARTY_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_DISBAND_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_INVITE_REQ)
HOBJECT				hTarget;
// If the player belong to a party, the part of 'wszPartyName' doesn't need to be sent when inviting another player.
// �̹� ��Ƽ�� ������ ���¿��� �ٸ� �÷��̾ �ʴ��� ������ wszPartyName �κ��� �������� �ʾƵ� �ȴ�.
// by YOSHIKI(2009-02-13)
WCHAR				wszPartyName[MAX_SIZE_PARTY_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_INVITE_CHARID_REQ)
CHARACTERID			targetCharId;
// If the player belong to a party, the part of 'wszPartyName' doesn't need to be sent when inviting another player.
// �̹� ��Ƽ�� ������ ���¿��� �ٸ� �÷��̾ �ʴ��� ������ wszPartyName �κ��� �������� �ʾƵ� �ȴ�.
// by YOSHIKI(2009-02-13)
WCHAR				wszPartyName[MAX_SIZE_PARTY_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_INVITE_CHAR_NAME_REQ)
WCHAR				wszTargetName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
// If the player belong to a party, the part of 'wszPartyName' doesn't need to be sent when inviting another player.
// �̹� ��Ƽ�� ������ ���¿��� �ٸ� �÷��̾ �ʴ��� ������ wszPartyName �κ��� �������� �ʾƵ� �ȴ�.
// by YOSHIKI(2009-02-13)
WCHAR				wszPartyName[MAX_SIZE_PARTY_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_RESPONSE_INVITATION)
BYTE				byResponse;		 //eINVITATION_RESPONSE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_LEAVE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_KICK_OUT_REQ)
HOBJECT				hTargetMember;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_CHANGE_LEADER_REQ)
HOBJECT				hTargetMember;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_OPEN_CHARM_SLOT_REQ)
//	BYTE				byCharmInventoryIndex;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_CLOSE_CHARM_SLOT_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_REGISTER_VICTIM_ITEM_REQ)
//	BYTE				bySrcPlace;
//	BYTE				bySrcPos;
//	BYTE				byDestSlotIndex;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_UNREGISTER_VICTIM_ITEM_REQ)
//	BYTE				byDestSlotIndex;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_REGISTER_VICTIM_ZENNY_REQ)
//	DWORD				dwZenny;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_UNREGISTER_VICTIM_ZENNY_REQ)
//	DWORD				dwZenny;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_DECLARE_ZENNY_REQ)
//	DWORD				dwZennyToDeclare;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_ACTIVATE_CHARM_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_DEACTIVATE_CHARM_REQ)
//	BYTE				byCharmInventoryIndex;
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_CHANGE_ZENNY_LOOTING_METHOD_REQ)
BYTE				byLootingMethod;		// ePARTY_ZENNY_LOOTING
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_CHANGE_ITEM_LOOTING_METHOD_REQ)
BYTE				byLootingMethod;		// ePARTY_ITEM_LOOTING
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEST_ZENNY_REQ)
//	BYTE			byPos;
//	// 'dwZennyToInvest' doesn't mean relative value to the current zenny but final invested zenny.
//	// ���� ���ڵ� ����Ʈ���� ������� ���� �ƴ϶�, �����ۿ� ���������� ���ڵ� �����̴�.
//	// by YOSHIKI(2006-11-01)
//	DWORD			dwZennyToInvest;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_ITEM_RANK_SET_REQ)
//	BYTE				byItemRank; // eITEM_RANK 
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_START_REQ)
HOBJECT				handle;			// NpcHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_MOVE_REQ)
HOBJECT				handle;
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_MOVE_STACK_REQ)
HOBJECT				handle;
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
BYTE				byStackCount;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_ZENNY_REQ)
HOBJECT				handle;			// NpcHandle
DWORD				dwZenny;		// ���ų� ���� �׼�
bool				bIsSave;		// 1 �� ���� ��� 0 �� ���°��
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_BUY_REQ)
HOBJECT				hNpchandle;
BYTE				byMerchantTab;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_ITEM_DELETE_REQ)
BYTE				byPlace;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_INDICATOR_REQ)
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_PREDICT_REQ)
BYTE				byPusNum;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_EQUIP_CHECK_REQ)
HOBJECT				hTarget;			// Ȯ�� �ϰ��� �ϴ� ��� Ÿ�� �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_CHIP_REMOVE_ALL_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SOCIAL_ACTION)
TBLIDX				socialActionId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TS_CONFIRM_STEP_REQ)
BYTE				byTsType; // Ʈ���� Ÿ��
TS_T_ID			tId;
TS_TC_ID		tcCurId;
TS_TC_ID		tcNextId;
DWORD				dwParam;
BYTE				byEventType;
DWORD				dwEventData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TS_UPDATE_STATE)
BYTE				byTsType;	// Ʈ���� Ÿ��
TS_T_ID			tId;
BYTE				byType;
WORD				wTSState;
DWORD				dwParam;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TS_EXCUTE_TRIGGER_OBJECT)
HOBJECT				hSource;
HOBJECT				hTarget;
BYTE				byEvtGenType;
unsigned int		uiParam;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUEST_ITEM_MOVE_REQ)
BYTE				bySrcPos;
BYTE				byDestPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUEST_ITEM_DELETE_REQ)
BYTE				byDeletePos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUEST_GIVEUP_REQ)
TS_T_ID			tId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUEST_SHARE)
TS_T_ID			tId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUEST_OBJECT_VISIT_REQ)
QUESTID				qId;
WORLDID				worldId;
BYTE				byObjType;			// eOBJTYPE
TBLIDX				objectTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_FREEBATTLE_CHALLENGE_REQ)
HOBJECT				hTarget;	// ������û ���ĳ������ �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_FREEBATTLE_ACCEPT_RES)
BYTE				byAccept; // 1: ���� 0: ���� 2: �����һ��°� �ƴ� ���� ���� ����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUICK_SLOT_UPDATE_REQ)
TBLIDX				tblidx;
BYTE				bySlotID;
BYTE				byType;
BYTE				byPlace;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_QUICK_SLOT_DEL_REQ)
BYTE				bySlotID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PET_DISMISS_PET_REQ)
BYTE				byAvatarType;		// eDBO_AVATAR_TYPE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_START_REQ)			// �ش� �������� ��ȯ ��û
HOBJECT				hTarget;			// Ÿ�� �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_OK_RES)				// �ش� ������ ����
HOBJECT				handle;				// ��û���� �ڵ�
BYTE				byOK;				// �¶� ���� 1 : �¶� 0 : �ź� 3: �ٻۻ�Ȳ
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_ADD_REQ)			// ��ȯâ�� ������ ���
HOBJECT				hTarget;			// Ÿ�� �ڵ�
HOBJECT				hItem;				// ������ �ڵ�
BYTE				byCount;			// �����ִ� �������� ��ΰ�? Default 1��
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_DEL_REQ)			// ��ȯâ�� ������ ����
HOBJECT				hTarget;			// Ÿ�� �ڵ�
HOBJECT				hItem;				// ������ �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_MODIFY_REQ)			// ��ȯâ�� ������ ���
HOBJECT				hTarget;			// Ÿ�� �ڵ�
HOBJECT				hItem;				// ������ �ڵ�
BYTE				byCount;			// �����ִ� �������� ��ΰ�? Default 1��
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_ZENNY_UPDATE_REQ)	// ��ȯâ�� ���� ��� �� ����
HOBJECT				hTarget;			// TargetHandle
DWORD				dwZenny;			// �ű� ��ŭ�� ���� (�ڱⰡ ���� �ִ� ���� �ѵ� ��)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_END_REQ)			// ��ȯ �Ϸ� ��ư Ŭ��
HOBJECT				hTarget;			// Ÿ�� �ڵ�
DWORD				dwPacketCount;		// ������ ���� ī��Ʈ ( ������ ������ �÷����ų� ���� Ȥ�� ���� �� ��Ŷ���� ���� )
bool				bIsSet;				// false : Ȯ��Ǯ�� true: Ȯ�����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_CANCEL_REQ)			// ��ȯ ��� Ȥ�� ĳ������ �Ÿ� ��Ż�� ���
HOBJECT				hTarget;			// Ÿ�� �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRADE_DENY_REQ)			// ��ȯ ��� Ȥ�� ĳ������ �Ÿ� ��Ż�� ���
bool				bIsDeny;			// TRUE: ���� �ϵ��� FALSE: ���� ������
END_PROTOCOL()
//------------------------------------------------------------------	
BEGIN_PROTOCOL(UG_GUILD_CREATE_REQ)
HOBJECT				hGuildManagerNpc;
WCHAR				wszGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_INVITE_REQ)
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TUTORIAL_HINT_UPDATE_REQ)
DWORD				dwTutorialHint;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TUTORIAL_WAIT_CANCEL_REQ)

END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TUTORIAL_PLAY_QUIT_REQ)

END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_TIMEQUEST_ROOM_LIST_REQ)
//	HOBJECT				hTimeQuestNpc;		// �ش� Ÿ�Ӹӽ�����Ʈ NPC�� �ڵ� 
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_TIMEQUEST_ROOM_INFO_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_TIMEQUEST_ROOM_JOIN_REQ)
//	HOBJECT				hTimeQuestNpc;		// �ش� Ÿ�Ӹӽ�����Ʈ NPC�� �ڵ�
//	BYTE				byTimeQuestMode;	// ���� or Party ( eTIMEQUEST_MODE )
//	bool				bIsRetry;			// ���û���� �ƴ����� ��Ÿ��
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_TIMEQUEST_ROOM_LEAVE_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_TIMEQUEST_ROOM_TELEPORT_REQ)
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_RANKBATTLE_INFO_REQ)
BYTE					byBattleMode;		// eRANKBATTLE_MODE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_RANKBATTLE_JOIN_REQ)
HOBJECT					hBoardObject;
TBLIDX					rankBattleTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_RANKBATTLE_LEAVE_REQ)
TBLIDX					rankBattleTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_LIST_REQ)
//	HOBJECT				hRankBattleObject;	// �Խ��� Object�� �ڵ�
//	WORD				wPage;				// �Խ����� ��� Page
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_INFO_REQ)
//	HOBJECT				hRankBattleObject;	// �Խ��� Object�� �ڵ�
//	ROOMID				roomId;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_CREATE_REQ)
//	HOBJECT				hRankBattleObject;	// �Խ��� Object�� �ڵ�
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_LEAVE_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_CHALLENGE_REQ)
//	HOBJECT				hRankBattleObject;	// �Խ��� Object�� �ڵ�
//	ROOMID				roomId;				// �� ��ȣ
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_RANKBATTLE_ROOM_MATCH_CANCEL_REQ)
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DRAGONBALL_CHECK_REQ)
HOBJECT				hObject;						  // TS Object ����	 
sITEM_POSITION_DATA sData[ITEM_MAX_DRAGONBALL];   // �κ����� �巡�ﺼ������
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DRAGONBALL_REWARD_REQ)
HOBJECT				hObject;						  // TS Object ����	
TBLIDX				rewardTblidx;					  // ���� ���� ���̺� �ε���
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_CREATE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_EXIT_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_OPEN_REQ)
WCHAR					wcPrivateShopName[MAX_PRIVATESHOP_NAME_IN_UNICODE + 1];
bool					bIsOwnerEmpty; //true�̸� ������ �ڸ��� ����
BYTE					byNoticeSize;
WCHAR					wcNotice[MAX_PRIVATESHOP_NOTICE_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_CLOSE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
//���� ���� (������� ������ - ���� ���ɼ� ����)
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_GET_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_INSERT_REQ)
BYTE							byPrivateShopInventorySlotPos;
BYTE							byInventoryPlace;
BYTE							byInventoryPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_UPDATE_REQ)
BYTE							byPrivateShopInventorySlotPos;
DWORD							dwZenny;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_DELETE_REQ)
BYTE							byPrivateShopInventorySlotPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_BUYING_REQ)
HOBJECT						hOwner;
BYTE						byPrivateShopInventorySlotPos[MAX_BUY_SHOPPING_CART];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ENTER_REQ)
HOBJECT						hOwner;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_LEAVE_REQ)
HOBJECT						hOwner;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_ITEM_SELECT_REQ)
HOBJECT						hOwner;
BYTE						byPrivateShopInventorySlotPos;
BYTE						byItemState;//eITEMSTATE ���� ���´�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_START_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_SEND_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
BYTE byMailType;	// eMAIL_TYPE	
sITEM_POSITION_DATA sItemData;	// ������������
DWORD dwZenny;		// Req or Give Zenny
BYTE byDay;		// ��ȿ���ᳯ¥ �ִ� 10��
WCHAR wszTargetName[MAX_SIZE_CHAR_NAME_UNICODE + 1];	// ���� ĳ�� �̸�
BYTE  byTextSize;	// �������� ��Ŷ�� �ؽ�Ʈ ������
WCHAR wszText[MAX_LENGTH_OF_MAIL_MESSAGE + 1];	// ���ϳ���
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_READ_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
MAILID	mailID;	// ���� ���̵�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_DEL_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
MAILID	mailID;	// ���� ���̵�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_RETURN_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
MAILID	mailID;	// ���� ���̵�	
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_RELOAD_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_LOAD_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
BYTE	byCount;
MAILID	aMailID[MAX_MAIL_SLOT_COUNT];	// ���� ���̵�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_ITEM_RECEIVE_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
MAILID	mailID;	// ���� ���̵�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_LOCK_REQ)
HOBJECT	hObject;	// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
MAILID	mailID;	// ���� ���̵�
bool	bIsLock;		// Lock 1: Unlock: 0
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_MAIL_MULTI_DEL_REQ)
HOBJECT	hObject;								// ���ϼۼ���ž ������Ʈ (��ī��Ʈ���� ����� INVALID_OBJECT )
BYTE	byCount;
MAILID	aMailID[MAX_COUNT_OF_MULTI_DEL];		// ���� ���̵�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_REQUEST_REQ)
HOBJECT						hOwner;
BYTE						byPrivateShopInventorySlotPos;
TBLIDX						itemNo;//Ŭ���̾�Ʈ�� ������ �������� �������� �˻��ϱ� ����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_CONSENT_RES)
bool						bResult;
TBLIDX						itemNo;//Ŭ���̾�Ʈ�� ������ �������� �������� �˻��ϱ� ����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_WAITTIMEOUT_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_PRICEFLUCTUATIONS_REQ)
DWORD						dwPriceFluctuationsZenny;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_IMMEDIATE_ITEM_BUYING_REQ)
HOBJECT						hOwner;
unsigned __int16			nPriceFluctuationsCounter;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PRIVATESHOP_BUSINESS_CANCEL_REQ)
HOBJECT						hOwner;
END_PROTOCOL()
//------------------------------------------------------------------

//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PORTAL_ADD_REQ)
HOBJECT				handle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PORTAL_REQ)
HOBJECT				handle;
BYTE				byPoint;		// 0~7���� ���õ� �ε���
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PING)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_WAR_FOG_UPDATE_REQ)
HOBJECT				hObject;			// Object Handle		
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_FUNCTION_ADD_REQ)
HOBJECT				hGuildManagerNpc;
BYTE				byFunction;			// �߰��� ��� ��ȣ eDBO_GUILD_FUNCTION
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_GIVE_ZENNY)
HOBJECT				hGuildManagerNpc;
DWORD				dwZenny;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_BANK_START_REQ)
HOBJECT				handle;			// â�� NpcHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_BANK_MOVE_REQ)
HOBJECT				handle;			// â�� NpcHandle	
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_BANK_MOVE_STACK_REQ)
HOBJECT				handle;			// â�� NpcHandle
BYTE				bySrcPlace;
BYTE				bySrcPos;
BYTE				byDestPlace;
BYTE				byDestPos;
BYTE				byStackCount;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_BANK_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_BANK_ZENNY_REQ)
HOBJECT				handle;			// NpcHandle
DWORD				dwZenny;		// ���ų� ���� �׼�
bool				bIsSave;		// 1 �� ���� ��� 0 �� ���°��
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CROSSFIRE_REQ)
HOBJECT				hAnotherUser;		//������ ������ User �ڵ�
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_CREATE_MARK_REQ)
sDBO_GUILD_MARK		sMark;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_CHANGE_MARK_REQ)
sDBO_GUILD_MARK		sMark;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BANK_LOAD_REQ)
HOBJECT				handle;			// NpcHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_CHANGE_NAME_REQ)
HOBJECT				hGuildManagerNpc;
WCHAR				wszGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_SHARETARGET_REQ)
BYTE				bySlot;
HOBJECT				hTarget;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_RIDE_ON_BUS_REQ)
HOBJECT				hTarget;			// NpcHandle
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_RIDE_OFF_BUS_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TRANSFORM_CANCEL_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_ITEM_IDENTIFY_REQ)
HOBJECT				hNpchandle;		// NpcHandle
BYTE				byPlace;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DICE_ROLL_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_JOIN_INDIVIDUAL_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_LEAVE_INDIVIDUAL_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_JOIN_TEAM_INFO_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_JOIN_TEAM_REQ)
WCHAR				wszTeamName[MAX_LENGTH_BUDOKAI_TEAM_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_LEAVE_TEAM_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_LEAVE_TEAM_MEMBER_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_JOIN_INFO_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_JOIN_STATE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_MUDOSA_INFO_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_MUDOSA_TELEPORT_REQ)
BYTE			byMudosaIndex;				// ������ �ε���
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_PARTY_MAKER_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_SOCIAL_ACTION)
ANIMATIONID			socialAction;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_PRIZEWINNER_NAME_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_PRIZEWINNER_TEAM_NAME_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_GM_BUDOKAI_SERVER_ENTER_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_GM_BUDOKAI_SERVER_LEAVE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_GM_MATCH_PROGRESS_INFO_REQ)
BYTE				byMatchType;	// eBUDOKAI_MATCH_TYPE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_GM_MATCH_ARENA_ENTER_REQ)
BYTE				byMatchType;		// eBUDOKAI_MATCH_TYPE
BYTE				byMatchWorldType;	// eMATCHWORLD_TYPE
BYTE				byMatchDepth;		// eBUDOKAI_MATCH_DEPTH
BYTE				byMatchIndex;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_BUDOKAI_GM_MATCH_ARENA_LEAVE_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_TURN_ON)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_TURN_OFF)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_ITEM_SELL_REQ)
BYTE			byPlace;
BYTE			byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_EVENTITEM_START_REQ)
HOBJECT				handle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_EVENTITEM_BUY_REQ)
HOBJECT				handle;
BYTE				byBuyCount;
sSHOP_BUY_CART		sBuyData[MAX_BUY_SHOPPING_CART];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_EVENTITEM_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_GAMBLE_BUY_REQ)
HOBJECT				handle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_DIFF_CHANGE_REQ)
ePARTY_DUNGEON_STATE eDiff;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PARTY_DUNGEON_INIT_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_INIT_REQ)
HOBJECT				handle;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_CHARM_DICE_ROLL_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_LOCK_REQ)
//	bool				bIsOpen;	// 1: Open 0:Close
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_RESET_REQ)
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_ACCEPTED_REQ)
//	BYTE				byItemSlot;	// ��Ƽ�κ� �ش� ���� ������ ����
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_GIVE_REQ)
//	BYTE				byItemSlot;		// ��Ƽ�κ� �ش� ���� ������ 
//	HOBJECT				hTarget;
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_DICE_START_REQ)
//	BYTE				byItemSlot;		// ��Ƽ�κ� �ش� ���� ������	
//END_PROTOCOL()
////------------------------------------------------------------------
//BEGIN_PROTOCOL(UG_PARTY_INVEN_DICE_ROLL_REQ)
//END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_TELEPORT_CONFIRM_REQ)
bool				bTeleport;		// true : Ȯ��, false : ���
BYTE				byTeleportIndex;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HOIPOIMIX_ITEM_CHECK_REQ)			// ��������� ���� (�ʿ��� ������ ���� üũ)
HOBJECT				objHandle;
TBLIDX				recipeTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HOIPOIMIX_ITEM_MAKE_REQ)			// ������ �����
HOBJECT				objHandle;
TBLIDX				recipeTblidx;
bool				bIsEPUseSuccess;			// EP �������
END_PROTOCOL()
//------------------------------------------------------------------			
BEGIN_PROTOCOL(UG_HOIPOIMIX_ITEM_MAKE_EP_REQ)		// ������ ����� �� EP �ֱ�
TBLIDX				recipeTblidx;
END_PROTOCOL()
//------------------------------------------------------------------	
BEGIN_PROTOCOL(UG_HOIPOIMIX_ITEM_MACHINE_DEL_REQ)			// �ӽ� ����
HOBJECT				objHandle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HOIPOIMIX_JOB_SET_REQ)			// �� ����
HOBJECT				hNpchandle;
BYTE				byRecipeType;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_HOIPOIMIX_JOB_RESET_REQ)			// �� ����
HOBJECT				hNpchandle;
BYTE				byRecipeType;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_DIRECT_PLAY_CANCEL_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_ENGINE_START_REQ)
TBLIDX				idFuelItemTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_ENGINE_STOP_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_STUNT_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_VEHICLE_FUEL_REMOVE_NFY)
TBLIDX				idFuelItemTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_CREATE_REQ)
HOBJECT				hObject;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_DELETE_REQ)
HOBJECT				hObject;
TBLIDX				dojoTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_FUNCTION_ADD_REQ)
HOBJECT				hGuildManagerNpc;
BYTE				byFunction;			// �߰��� ��� ��ȣ eDBO_GUILD_FUNCTION
BYTE				byPlace;			// ȣ�����̶��� �ʿ�� �κ���ġ ���ʿ�� INVALID_BYTE
BYTE				byPos;				// ȣ�����̶��� �ʿ�� �κ���ġ ���ʿ�� INVALID_BYTE
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_BANK_HISTORY_REQ)
HOBJECT				hObject;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOGI_CREATE_REQ)
HOBJECT				hObject;
sDBO_DOGI_DATA		sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOGI_CHANGE_REQ)
HOBJECT				hObject;
sDBO_DOGI_DATA		sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_DOGI_CREATE_REQ)
HOBJECT				hObject;
sDBO_DOGI_DATA		sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GUILD_DOGI_CHANGE_REQ)
HOBJECT				hObject;
sDBO_DOGI_DATA		sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_SCRAMBLE_REQ)			// ������Ż�� ��û (������)
HOBJECT				hNpcHandle;				// ���������
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_SCRAMBLE_RESPONSE_REQ)		// ������Ż�� ��û�� ���� ���� (��������)
bool				bIsAccept;				// ��û�� ���� ���� 1:�ޱ� 0:����
END_PROTOCOL()
//------------------------------------------------------------------						
BEGIN_PROTOCOL(UG_SHOP_NETPYITEM_START_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_NETPYITEM_BUY_REQ)
BYTE				byBuyCount;
sSHOP_BUY_CART		sBuyData[MAX_BUY_SHOPPING_CART];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SHOP_NETPYITEM_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_WORLD_MAP_STATUS)
bool				bIsWorldMapOpen;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DOJO_NPC_INFO_REQ)
HOBJECT				hNpcHandle;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GAMEGUARD_AUTH_ANSWER_RES)
BYTE				byDataSize;
BYTE				abyData[UCHAR_MAX];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_GAMEGUARD_HACK_INFO_NFY)
WORD				wDataSize;
BYTE				abyData[USHRT_MAX];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SKILL_CASTING_CANCELED_NFY)
WORD				wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PET_ATTACK_TARGET_NFY)
BYTE				byAvatarType;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DURATION_ITEM_BUY_REQ)
TBLIDX				merchantTblidx;
BYTE				byPos;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_DURATION_RENEW_REQ)
HOBJECT				hItemHandle;
END_PROTOCOL()
//------------------------------------------------------------------

BEGIN_PROTOCOL(UG_GMT_UPDATE_REQ)
sGAME_MANIA_TIME	sNext;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_LOC_AFTER_KNOCKDOWN_NFY)
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_LOC_AFTER_SLIDING_NFY)
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CHAR_LOC_AFTER_PUSH_NFY)
sVECTOR3			vCurLoc;
sVECTOR2			vCurDir;
END_PROTOCOL()

//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_PORTAL_START_REQ)
HOBJECT				handle;			// �ش� NPC �˻��� ��Ż ���� �ε�
END_PROTOCOL()

BEGIN_PROTOCOL(UG_CASHITEM_START_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_MOVE_REQ)
DWORD				dwProductId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_USE_REQ)
DWORD				dwProductId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_HLSHOP_START_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_HLSHOP_END_REQ)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_CASHITEM_BUY_REQ)
BYTE				byBuyCount;
DWORD				adwIdxHlsTable[MAX_BUY_HLSSHOP_CART];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(UG_SCOUTER_ACTIVATION_REQ)
BYTE  test[22];
END_PROTOCOL()
BEGIN_PROTOCOL(UG_ITEM_UPGRADE_WORK_REQ)
HOBJECT				handle;				// NpcHandle
BYTE				byItemPlace;		// ���׷��̵� �� �������� �����̳� ��ġ
BYTE				byItemPos;			// ���׷��̵� �� �������� ��ġ
BYTE				byStonPlace;		// ȣ�����̽��� �����̳� ��ġ
BYTE				byStonPos;			// ȣ�����̽��� ��ġ
BYTE				byPosNum;			// ���׷��̵� â�� ������ġ: (�������� ���Թ�ȣ * 10 + ȣ�����̽��潽�Թ�ȣ) 
END_PROTOCOL()

/*
,
UG_CHAR_AIR_JUMP,
UG_CHAR_AIR_DASH,
UG_CHAR_AIR_FALLING,
UG_CHAR_AIR_END,
UG_CHAR_AIR_FOLLOW_MOVE,
UG_CHAR_AIR_ACCEL,
UG_CHAR_AIR_POSE_REQ,
*/
#pragma pack()

#endif // !PACKET_UG__H