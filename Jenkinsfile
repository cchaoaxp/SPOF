pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('Qt-Build') {
      agent any
      steps {
        sh './buildScript.sh'
        archiveArtifacts(onlyIfSuccessful: true, artifacts: 'target/*.hpi')
      }
    }

    stage('QtUnitTest') {
      steps {
        sh './testScript.sh'
      }
    }

  }
}