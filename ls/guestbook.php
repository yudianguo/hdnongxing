<?php
require_once(dirname(__FILE__).'/config.php');
require_once(DEDEINC.'/datalistcp.class.php');
require_once(DEDEINC.'/common.func.php');

if(empty($dopost))
{
	$dopost ='';
}
if(empty($fmdo))
{
	$fmdo = '';
}

function username($mid)
{
	global $dsql;
	if(!isset($mid) || empty($mid))
	{
		return "�ο�";
		exit();
	}
	else
	{
		$sql = "Select uname From `#@__member` WHERE `mid` = '$mid'";
		$row = $dsql->GetOne($sql);
		return $row['uname'];
		exit();
	}
	exit();
}

if($dopost == "delete")
{
	if($id=='')
	{
		ShowMsg("������Ч��","-1");
		exit();
	}
	
	//ȷ���h���������
	if($fmdo=='yes')
	{
		$id = explode("`",$id);
		foreach ($id as $var)
		{
			$query = "DELETE FROM `#@__guestbook` WHERE `id` = '$var'";
			$dsql->ExecuteNoneQuery($query);
		}
		ShowMsg("�ɹ�ɾ��ָ�����ĵ���","guestbook.php");
		exit();
	}
	
	//ɾ��ȷ����ʾ
	else
	{
		require_once(DEDEINC."/oxwindow.class.php");
		$wintitle = "ɾ��";
		$wecome_info = "<a href='guestbook.php'>�������</a>::ɾ������";
		$win = new OxWindow();
		$win->Init("guestbook.php","js/blank.js","POST");
		$win->AddHidden("fmdo","yes");
		$win->AddHidden("dopost",$dopost);
		$win->AddHidden("id",$id);
		$win->AddTitle("��ȷʵҪɾ��������ԣ�");
		$winform = $win->GetWindow("ok");
		$win->Display();
		exit();
	}
	exit();
}else if($dopost=='look'){
  global $dsql;
  $sql="select * from `#@__guestbook` where id='$id'";
  $info=$dsql->GetOne($sql);
  echo $info['msg'];
  echo "<br>"."<a href='guestbook.php'>��������</a>";
  exit();
}else if($dopost=='check'){
  global $dsql;
  $sql="update `#@__guestbook` set `ischeck`=1 where `id`='$id'";
  $dsql->ExecuteNoneQuery($sql);
}

$sql = "Select * From `#@__guestbook`";
$dlist = new DataListCP();
$dlist->SetTemplet(DEDEADMIN."/templets/guestbook.htm");
$dlist->SetSource($sql);
$dlist->display();
?>