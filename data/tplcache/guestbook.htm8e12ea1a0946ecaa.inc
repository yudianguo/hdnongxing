<?php
$z[0]=Array("datalist","\r\n    <table width='100%' border='0' align=\"center\" cellpadding='0' cellspacing='0' style=\"<?php echo ((\$ntt==0) ? \"background:{\$bgcc}\" : 'background:#ffffff'); ?>\">\r\n      <tr>\r\n        <td width='160' align=\"center\" class='ltd'>\r\n        	<b><?php echo \$fields['uname']; ?></b>\r\n        </td>\r\n      	<td height=\"26\" class='timetd'>\r\n      		<img height='16' src='guestbook/images/time.gif' width='16' /> 时间: <?php echo MyDate('m-d H:i',\$fields['dtime']); ?>\r\n      	  &nbsp; \r\n      	  主题：<?php echo \$fields['title']; ?>\r\n      	</td>\r\n      </tr>\r\n      <tr>\r\n      	<td width='160' rowspan='2' align=\"center\" class='lefttd'>\r\n        	<table width='160' border='0' align=\"center\" cellpadding='1' cellspacing='2'>\r\n          	<tr>\r\n            	<td height=\"80\" align=\"center\">\r\n            		<img src='guestbook/images/<?php echo \$fields['face']?>.gif' border=0 /> <?php echo GetIsCheck(\$fields['ischeck'],\$fields['id'])?>\r\n            	</td>\r\n          	</tr>\r\n          	<tr>\r\n            	<td height=\"20\">&nbsp;来自：<?php echo preg_replace(\"#[^\\.]*\\.[^\\.]*\$#\",\"*.*\",\$fields['ip']); ?></td>\r\n          	</tr>\r\n          	<tr>\r\n            	<td height=\"20\">&nbsp;QQ：<?php echo \$fields['qq']?></td>\r\n          	</tr>\r\n        	</table>\r\n        </td>\r\n      	<td class='msgtd'><?php echo \$fields['msg']; ?></td>\r\n      </tr>\r\n      <tr>\r\n      	<td height=\"26\" class=\"bottomtd\">\r\n      		<a href='mailto:<?php echo \$fields[\"email\"]?>'><img src='guestbook/images/mail.gif' border=0 width='16' height='16' />[邮件]</a> &nbsp;\r\n      		<a href='http://<?php echo \$fields['homepage']?>' target='_blank'><img src='guestbook/images/home.gif' border=0 width='16' height='16' />[主页]</a> &nbsp;\r\n      		<a href='guestbook.php?action=admin&id=<?php echo \$fields['id']; ?>'><img src='guestbook/images/quote.gif' border=0 height=16 width=16 />[回复/编辑]</a> &nbsp;\r\n      		<?php if(\$g_isadmin) { ?>\r\n      		<a href='guestbook.php?action=admin&id=<?php echo \$fields['id']; ?>&job=del'><img src='guestbook/images/del.gif' border=0 height=16 width=16 />[删除]</a>\r\n      	  <?php }  ?>\r\n      	</td>\r\n      </tr>\r\n    </table>\r\n    <?php if(\$ntt==0){\$ntt=1;}else{ \$ntt=0; } ?>\r\n    ",2194,4428);
$z[1]=Array("pagelist","",4588,4617);
$z[1][4]['listsize']="5";
$z[2]=Array("include","",9239,9280);
$z[2][4]['filename']="plus_foot.htm";

?>