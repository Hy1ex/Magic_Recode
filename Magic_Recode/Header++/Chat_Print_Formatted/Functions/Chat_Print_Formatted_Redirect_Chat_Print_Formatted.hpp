#pragma once

void Redirect_Chat_Print_Formatted(void* Client_Module_Location)
{
	if (Menu_Select::Game_Identifier == 0)
	{
		Redirection_Manager::Redirect_Function(Original_Chat_Print_Formatted_Caller_Location, 2, (void*)((unsigned __int32)Client_Module_Location + 1219184), (void*)Redirected_Chat_Print_Formatted_Source);
	}
	else
	{
		constexpr unsigned __int8 Chat_Print_Formatted_Bytes[6] =
		{
			195,

			128,

			62,

			0,

			116,

			40
		};

		Redirection_Manager::Redirect_Function(Original_Chat_Print_Formatted_Caller_Location, 2, (void*)((unsigned __int32)Byte_Manager::Find_Bytes(Client_Module_Location, (void*)Chat_Print_Formatted_Bytes, sizeof(Chat_Print_Formatted_Bytes)) - 168), (void*)Redirected_Chat_Print_Formatted_Global_Offensive);
	}
}