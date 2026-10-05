float snek_score(int num_files, int num_contributors, int num_commits,
                 float avg_bug_criticality) {
  float size = num_commits * num_files;
  float complexity_factor = size + num_contributors;
  float final_score = complexity_factor * avg_bug_criticality;
  return final_score;
}
