#include <windows.h>
HINSTANCE dll;

typedef char * (__stdcall *Api_GetGtk_Bkn_ptr)(char * );
Api_GetGtk_Bkn_ptr Api_GetGtk_Bkn;
typedef char * (__stdcall *Api_GetBkn32_ptr)(char * );
Api_GetBkn32_ptr Api_GetBkn32;
typedef char * (__stdcall *Api_GetLdw_ptr)(char * );
Api_GetLdw_ptr Api_GetLdw;
typedef char * (__stdcall *Api_GetRunPath_ptr)();
Api_GetRunPath_ptr Api_GetRunPath;
typedef char * (__stdcall *Api_GetOnlineQQlist_ptr)();
Api_GetOnlineQQlist_ptr Api_GetOnlineQQlist;
typedef char * (__stdcall *Api_GetQQlist_ptr)();
Api_GetQQlist_ptr Api_GetQQlist;
typedef char * (__stdcall *Api_GetSessionkey_ptr)(char * );
Api_GetSessionkey_ptr Api_GetSessionkey;
typedef char * (__stdcall *Api_GetClientkey_ptr)(char * );
Api_GetClientkey_ptr Api_GetClientkey;
typedef char * (__stdcall *Api_GetLongClientkey_ptr)(char * );
Api_GetLongClientkey_ptr Api_GetLongClientkey;
typedef char * (__stdcall *Api_GetCookies_ptr)(char * );
Api_GetCookies_ptr Api_GetCookies;
typedef char * (__stdcall *Api_GetPrefix_ptr)();
Api_GetPrefix_ptr Api_GetPrefix;
typedef void (__stdcall *Api_Cache_NameCard_ptr)(char * ,char * ,char * );
Api_Cache_NameCard_ptr Api_Cache_NameCard;
typedef void (__stdcall *Api_DBan_ptr)(char * ,char * );
Api_DBan_ptr Api_DBan;
typedef void (__stdcall *Api_Ban_ptr)(char * ,char * );
Api_Ban_ptr Api_Ban;
typedef bool (__stdcall *Api_Shutup_ptr)(char * ,char * ,char * ,int );
Api_Shutup_ptr Api_Shutup;
typedef bool (__stdcall *Api_IsShutup_ptr)(char *,char *, char *);
Api_IsShutup_ptr Api_IsShutup;
typedef void (__stdcall *Api_SetNotice_ptr)(char * ,char * ,char * ,char * );
Api_SetNotice_ptr Api_SetNotice;
typedef char * (__stdcall *Api_GetNotice_ptr)(char * ,char * );
Api_GetNotice_ptr Api_GetNotice;
typedef char * (__stdcall *Api_GetNameCard_ptr)(char * ,char * ,char * );
Api_GetNameCard_ptr Api_GetNameCard;
typedef void (__stdcall *Api_SetNameCard_ptr)(char * ,char * ,char * ,char * );
Api_SetNameCard_ptr Api_SetNameCard;
typedef void (__stdcall *Api_QuitDG_ptr)(char * ,char * );
Api_QuitDG_ptr Api_QuitDG;
typedef bool (__stdcall *Api_DelFriend_ptr)(char * ,char * );
Api_DelFriend_ptr Api_DelFriend;
typedef bool (__stdcall *Api_Kick_ptr)(char * ,char * ,char * );
Api_Kick_ptr Api_Kick;
typedef void (__stdcall *Api_JoinGroup_ptr)(char * ,char * ,char * );
Api_JoinGroup_ptr Api_JoinGroup;
typedef void (__stdcall *Api_QuitGroup_ptr)(char * ,char * );
Api_QuitGroup_ptr Api_QuitGroup;
typedef char * (__stdcall *Api_UploadPic_ptr)(char * ,int ,char * ,unsigned char * );
Api_UploadPic_ptr Api_UploadPic;
typedef char * (__stdcall *Api_GuidGetPicLink_ptr)(char * );
Api_GuidGetPicLink_ptr Api_GuidGetPicLink;
typedef int (__stdcall *Api_Reply_ptr)(char * ,int ,char * ,char * );
Api_Reply_ptr Api_Reply;
typedef int (__stdcall *Api_SendMsg_ptr)(char * ,int ,int ,char * ,char * ,char * );
Api_SendMsg_ptr Api_SendMsg;
typedef char * (__stdcall *Api_Send_ptr)(char * );
Api_Send_ptr Api_Send;
typedef int (__stdcall *Api_OutPut_ptr)(char * );
Api_OutPut_ptr Api_OutPut;
typedef bool (__stdcall *Api_IsEnable_ptr)();
Api_IsEnable_ptr Api_IsEnable;
typedef bool (__stdcall *Api_Login_ptr)(char * );
Api_Login_ptr Api_Login;
typedef void (__stdcall *Api_Logout_ptr)(char * );
Api_Logout_ptr Api_Logout;
typedef char * (__stdcall *Api_Tea加密_ptr)(char * ,char * );
Api_TeaEncrypt_ptr Api_TeaEncrypt;
typedef char * (__stdcall *Api_Tea解密_ptr)(char * ,char * );
Api_TeaDecrypt_ptr Api_TeaDecrypt;
typedef char * (__stdcall *Api_GetNick_ptr)(char * );
Api_GetNick_ptr Api_GetNick;
typedef char * (__stdcall *Api_GetQQLevel_ptr)(char * );
Api_GetQQLevel_ptr Api_GetQQLevel;
typedef char * (__stdcall *Api_GNGetGid_ptr)(char * );
Api_GNGetGid_ptr Api_GNGetGid;
typedef char * (__stdcall *Api_GidGetGN_ptr)(char * );
Api_GidGetGN_ptr Api_GidGetGN;
typedef int (__stdcall *Api_GetVersion_ptr)();
Api_GetVersion_ptr Api_GetVersion;
typedef char * (__stdcall *Api_GetVersionName_ptr)();
Api_GetVersionName_ptr Api_GetVersionName;
typedef int (__stdcall *Api_GetTimeStamp_ptr)();
Api_GetTimeStamp_ptr Api_GetTimeStamp;
typedef char * (__stdcall *Api_GetLog_ptr)();
Api_GetLog_ptr Api_GetLog;
typedef bool (__stdcall *Api_IfBlock_ptr)(char * );
Api_IfBlock_ptr Api_IfBlock;
typedef char * (__stdcall *Api_GetAdminList_ptr)(char * ,char * );
Api_GetAdminList_ptr Api_GetAdminList;
typedef char * (__stdcall *Api_AddTaotao_ptr)(char * ,char * );
Api_AddTaotao_ptr Api_AddTaotao;
typedef char * (__stdcall *Api_GetSign_ptr)(char * ,char * );
Api_GetSign_ptr Api_GetSign;
typedef char * (__stdcall *Api_SetSign_ptr)(char * ,char * );
Api_SetSign_ptr Api_SetSign;
typedef char * (__stdcall *Api_GetGroupListA_ptr)(char * );
Api_GetGroupListA_ptr Api_GetGroupListA;
typedef char * (__stdcall *Api_GetGroupListB_ptr)(char * );
Api_GetGroupListB_ptr Api_GetGroupListB;
typedef char * (__stdcall *Api_GetGroupMemberA_ptr)(char * ,char * );
Api_GetGroupMemberA_ptr Api_GetGroupMemberA;
typedef char * (__stdcall *Api_GetGroupMemberB_ptr)(char * ,char * );
Api_GetGroupMemberB_ptr Api_GetGroupMemberB;
typedef char * (__stdcall *Api_GetFriendList_ptr)(char * );
Api_GetFriendList_ptr Api_GetFriendList;
typedef int (__stdcall *Api_GetQQAge_ptr)(char * ,char * );
Api_GetQQAge_ptr Api_GetQQAge;
typedef int (__stdcall *Api_GetAge_ptr)(char * ,char * );
Api_GetAge_ptr Api_GetAge;
typedef char * (__stdcall *Api_GetPersonalProfile_ptr)(char * ,char * );
Api_GetPersonalProfile_ptr Api_GetPersonalProfile;
typedef char * (__stdcall *Api_GetEmail_ptr)(char * ,char * );
Api_GetEmail_ptr Api_GetEmail;
typedef int (__stdcall *Api_GetGender_ptr)(char * ,char * );
Api_GetGender_ptr Api_GetGender;
typedef int (__stdcall *Api_SendTyping_ptr)(char * ,char * );
Api_SendTyping_ptr Api_SendTyping;
typedef int (__stdcall *Api_SendShake_ptr)(char * ,char * );
Api_SendShake_ptr Api_SendShake;
typedef char * (__stdcall *Api_GetRadomOnlineQQ_ptr)();
Api_GetRadomOnlineQQ_ptr Api_GetRadomOnlineQQ;
typedef bool (__stdcall *Api_AddQQ_ptr)(char * ,char * ,bool );
Api_AddQQ_ptr Api_AddQQ;
typedef bool (__stdcall *Api_SetOLStatus_ptr)(char * ,int ,char * );
Api_SetOLStatus_ptr Api_SetOLStatus;
typedef char * (__stdcall *Api_GetMC_ptr)();
Api_GetMC_ptr Api_GetMC;
typedef char * (__stdcall *Api_GroupInvitation_ptr)(char * ,char * ,char * );
Api_GroupInvitation_ptr Api_GroupInvitation;
typedef char * (__stdcall *Api_CreateDG_ptr)(char * );
Api_CreateDG_ptr Api_CreateDG;
typedef char * (__stdcall *Api_KickDG_ptr)(char * ,char * ,char * );
Api_KickDG_ptr Api_KickDG;
typedef char * (__stdcall *Api_DGInvitation_ptr)(char * ,char * ,char * );
Api_DGInvitation_ptr Api_DGInvitation;
typedef char * (__stdcall *Api_GetDGList_ptr)(char * );
Api_GetDGList_ptr Api_GetDGList;
typedef bool (__stdcall *Api_SendMusic_ptr)(char * ,int ,char * ,char * ,char * ,char * ,char * ,char * ,char * ,char * ,char * ,char * );
Api_SendMusic_ptr Api_SendMusic;
typedef bool (__stdcall *Api_SendObjectMsg_ptr)(char * ,int ,char * ,char * ,char * ,int );
Api_SendObjectMsg_ptr Api_SendObjectMsg;
typedef bool (__stdcall *Api_IsFriend_ptr)(char *, char *);
Api_IsFriend_ptr Api_IsFriend;
typedef bool (__stdcall *Api_AddFriend_ptr)(char *, char *, char*);
Api_AddFriend_ptr Api_AddFriend;
typedef void (__stdcall *Api_SelfDisable_ptr)();
Api_SelfDisable_ptr Api_SelfDisable;
typedef int (__stdcall *Api_GetClientType_ptr)();
Api_GetClientType_ptr Api_GetClientType;
typedef int (__stdcall *Api_GetClientVer_ptr)();
Api_GetClientVer_ptr Api_GetClientVer;
typedef int (__stdcall *Api_GetPubNo_ptr)();
Api_GetPubNo_ptr Api_GetPubNo;
typedef int (__stdcall *Api_GetMainVer_ptr)();
Api_GetMainVer_ptr Api_GetMainVer;
typedef int (__stdcall *Api_GetTXSSOVer_ptr)();
Api_GetTXSSOVer_ptr Api_GetTXSSOVer;
typedef char * (__stdcall *Api_UploadVoice_ptr)(char *, int);
Api_UploadVoice_ptr Api_UploadVoice;
typedef char * (__stdcall *Api_GuidGetVoiceLink_ptr)(char *, char *);
Api_GuidGetVoiceLink_ptr Api_GuidGetVoiceLink;
typedef char * (__stdcall *Api_AddLogHandler_ptr)(int); //???
Api_AddLogHandler_ptr AddLogHandler;
typedef char * (__stdcall *Api_RemoveLogHandler_ptr)();
Api_RemoveLogHandler_ptr RemoveLogHandler;

