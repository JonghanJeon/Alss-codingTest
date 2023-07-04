SELECT B.TITLE, B.BOARD_ID, R.REPLY_ID, R.WRITER_ID, R.CONTENTS, DATE_FORMAT(R.CREATED_DATE,"%Y-%m-%d") AS CREATED_DATE 
FROM USED_GOODS_BOARD B, USED_GOODS_REPLY R
WHERE B.BOARD_ID = R.BOARD_ID
AND DATE_FORMAT(B.CREATED_DATE,"%Y%m")=202210
ORDER BY R.CREATED_DATE ASC, TITLE ASC
--DATE_FORMAT연습
