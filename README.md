# ProjectPT - Unreal Engine Toy Project

**ProjectPT**는 Unity에서 작업했던 경험을 바탕으로 Unreal Engine을 학습하며 제작한 토이 프로젝트입니다.  
Unity에서 사용했던 기술(예: TableGenerator, Addressable)과 Unreal의 시스템(GAS, Experience 등)을 비교 분석하며 적용한 과정과 결과를 정리했습니다.

**프로젝트 주요 내용**
- Unity의 시스템을 Unreal Engine에 맞게 변경 및 적용
- Unreal의 주요 시스템 (GAS, Experience, Subsystem 등) 학습 및 활용
- AI, UI, DataTable 등 다양한 기능 개발

🔗 **관련 문서**
- [ GitHub 위키](https://github.com/osy9611/ProjectPT/wiki)
- [ Unity 프로젝트 (ProjectT)](https://github.com/osy9611/ProjectT)

**영상 링크**
- [ 영상 링크 ](https://youtu.be/AaxhsxUV9HY)

---

## 콘텐츠

### Mail
- 붕괴 스타레일 우편 시스템을 모작한 콘텐츠로, 메일 리스트 뷰, 상세 팝업, 보상 수령 및 삭제 등의 기능을 구현했습니다.
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Mail)**
- **작업 결과**

  <a href="https://github.com/osy9611/ProjectPT/wiki/Mail">
    <img src="https://github.com/user-attachments/assets/de08e167-ad53-49b5-b85b-f5280df9bf9c" width="50%" height="50%" alt="우편 시스템 작업 결과 GIF">
  </a>

## 주요 시스템

### UI 시스템
- Unity의 UIManager를 Unreal의 UIManagerSubsystem 으로 변환
- GameplayTag 기반 UI Layer 관리 (Static, Dynamic, System)
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/UISystem)**

### DataTable & AssetManager
- CSV 기반 DataTable 자동 생성 및 직렬화 저장
  - **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/DataTable)**
- Unreal의 AssetManager를 Unity의 Addressable과 비교하여 리소스 로드 및 관리
  - **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/AssetManager)**

### Subsystem (Unity의 Manager 시스템을 Unreal에 적용)
- Unity에서 사용했던 Manager 패턴을 Unreal의 Subsystem 구조로 변환
- 게임 내 시스템을 `GameInstanceSubsystem` 및 `WorldSubsystem`으로 관리
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Subsystem)**

### Experience 및 GameFeature
- Lyra의 Experience 시스템을 분석하여 게임 모드 관리 적용
  - **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Experience)**
- GameFeature를 활용하여 독립적인 기능 로드 및 활성화 구현
  - **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/GameFeature)**

###  Gameplay Ability System (GAS)
- Unreal의 GAS 시스템을 활용하여 능력(스킬) 및 상태 효과를 관리
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Gameplay-Ability-System)**
- **작업 결과**
  
  <a href="https://github.com/osy9611/ProjectPT/wiki/AI">
    <img src="https://github.com/user-attachments/assets/18bf3fdf-26de-43d7-803f-ccf194549ac9" width="50%" height="50%" alt="Skill GIF">
  </a>

### AI 시스템
- AIComponent를 통한 AI 초기화 및 AttributeSet 관리
- AIController와 AI Perception을 이용한 감지 및 행동 패턴 구현
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/AI)**
- **작업 결과**
  
  <a href="https://github.com/osy9611/ProjectPT/wiki/AI">
    <img src="https://github.com/user-attachments/assets/3d397b01-cf37-4e33-b9f5-4b65a8e188e9" width="50%" height="50%" alt="AI 작업 결과">
  </a>
  
---
