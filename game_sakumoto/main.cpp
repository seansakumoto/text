#include "DxLib.h"
#include"SceneManager.h"

//���C���֐�(�v���O�����͂�������n�܂�܂�)
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrecInstance,
	_In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{

	//��O����(�ȏオ����������Acat ch���ɔ��)
	try
	{
		//�V�[���}�l�[�W���[�@�\�̐���
		SceneManager manager;

		//�V�[���}�l�W���[�@�\�̏���������
		manager.Initialize();

		//�V�[���}�l�W���[�@�\�̍X�V����
		manager.Update();

		//�V�[���}�l�W���[�@�\�̏I��������
		manager.Finalize();
	}
	catch (const char* err_log)
	{
		//�G���[�������e�̏o��
		OutputDebugString(err_log);

		//�G���[�I����ʒm
		return -1;
	}

	//����I����ʒm
	return 0;
}