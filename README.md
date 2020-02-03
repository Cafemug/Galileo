# Galileo - 알고리즘 스터디
Algorithm Galileo

## 가이드
- 일주일에 4문제중 3문제를 골라 풉니다

- 각자 문제마다 issue를 생성하고 라벨을 붙이며 branch를 생성합니다

- project에서 칸반형식을 따라 tracking을 합니다

- 문제를 풀었을 시 master에 PR를 날립니다

- reviewer에 상대방을 assign 하고 상대방은 code review를 해줍니다 (상대방도 그 문제를 풀었을 시)

- review가 끝나면 merge 합니다
## Branch 규칙
- Branch 생성 규칙은 다음과 같습니다
```
issue{이슈번호}_{문제번호}
```

## Commit 규칙

- commit 규칙은 다음과 같습니다 ([참조](https://www.conventionalcommits.org/ko/v1.0.0-beta.4/))
```
<타입>[문제번호]:<설명> // 최대 72자

[본문(선택사항)]

[꼬리말(선택사항)]
```

**예시**
- code review 적용
    - improvement(1000): 변경내용
- 제출했지만 틀렸을 경우 or 맞왜틀
    - progress(1000): 틀렸다고 생각하는 이유 등
- 답 완성
    - finish(1000): 문제 제목 및 구현 알고리즘

**설명**
- 줄에는 간략하게 서술한다

**타입의 종류**

| Type  | Description 
|:--------|:--------|
| improvement | 버그 수정이나 기능 추가 없이 현재 구현체를 개선 |
| fix | 틀린 예외나 bug를 찾아서 수정| 
| progress | 진행중|
| finish | 문제를 완벽히 품|

## Issue 생성 가이드
- 기본적인 템플릿에 따라 작성
- 문제를 보고 어떤 형식으로 풀어야 겠다나 어려울거같은 부분을 서술
- 적절한 라벨링

## PR 가이드
- 중점적으로 봐줬으면 하는 내용 서술
- 질문이나 개선사항 서술
- 본문 끝에 closes #{이슈번호}를 사용하여 PR에 이슈가 언급되게 함
