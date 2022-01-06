#pragma once

void Redirect_Controller_Move(void* Client_Module_Location)
{
	if (Menu_Select::Game_Identifier == 0)
	{
		Redirection_Manager::Redirect_Function(Original_Controller_Move_Caller_Location, 0, (void*)((unsigned __int32)Client_Module_Location + 1339680), (void*)Redirected_Controller_Move);
	}
	else
	{
		constexpr unsigned __int8 Controller_Move_Bytes[13] =
		{
			85,

			139,

			236,

			131,

			228,

			248,

			131,

			236,

			16,

			86,

			87,

			106,

			0
		};

		Redirection_Manager::Redirect_Function(Original_Controller_Move_Caller_Location, 0, Byte_Manager::Find_Bytes(Client_Module_Location, (void*)Controller_Move_Bytes, sizeof(Controller_Move_Bytes)), (void*)Redirected_Controller_Move);
	}
}