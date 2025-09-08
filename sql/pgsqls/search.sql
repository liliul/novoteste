-- select * from youtube_videos;
-- select region_code from youtube_videos where region_code = 'JP' limit 5
-- select title from youtube_videos where title like '%S%'
-- select 
-- published_at, criado_em 
-- from youtube_videos
-- where published_at >='2025-09-04'
-- and criado_em <= '2025-09-05'

-- select 
-- published_at 
-- from youtube_videos
-- where published_at > '2025-09-04'

-- select 
-- published_at 
-- from youtube_videos
-- where published_at::text like '%2025-09-04%'

SELECT published_at
FROM youtube_videos
WHERE published_at >= '2025-09-04'
AND published_at <  '2025-09-05;

-- SELECT published_at
-- FROM youtube_videos
-- WHERE DATE(published_at) = '2025-09-04';

